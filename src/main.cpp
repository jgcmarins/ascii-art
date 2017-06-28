#include "./headers/bmp_reader.h"
#include "./headers/bmp_process.h"

int main(int argc, char *argv[]) {

  if(argc != 4) {
    printf("Usage: ascii-art.app <image.bmp> M N\n(Where MxN is the size of the pixels group)\n");
    exit(0);
  } else {
    string image = argv[1];
    string ext = image.substr(image.size() - 3, image.size() - 1);

    if(ext.compare("bmp") != 0) {
      printf("The file %s is not a .bmp image\n", image.data());
      exit(1);
    }

    unsigned char *header = new unsigned char[54];
    bmp_image *bi = new_bmp_image();
    bi->bh = bmp_read_header(image, header);
    if(bi->bh->b != B && bi->bh->m != M) {
      delete_bmp_image(bi);
      printf("The file %s is not a .bmp image\n", image.data());
      exit(1);
    }
    bi->bb = bmp_read_body(image, bi->bh->width, bi->bh->height, atoi(argv[2]), atoi(argv[3]), bi->bh->bits);

    bmp_to_ascii(bi);

    /*printf("B: %c | M: %c\nWidth: %d | Height: %d\nBits/pixel: %d\n",
    bi->bh->b, bi->bh->m, bi->bh->width, bi->bh->height, bi->bh->bits);*/

    delete_bmp_image(bi);

    delete [] header;

  }

  return 0;
}

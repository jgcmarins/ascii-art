#include "./headers/bmp_reader.h"

int main(int argc, char *argv[]) {

  if(argc != 2) {
    printf("Usage: ascii-art.app <image.bmp>\n");
    exit(0);
  } else {
    string image = argv[1];
    string ext = image.substr(image.size() - 3, image.size() - 1);

    if(ext.compare("bmp") != 0) {
      printf("Image format must be BMP\n");
      exit(1);
    }

    unsigned char *header = new unsigned char[54];
    bmp_image *bi = new_bmp_image();
    bi->bh = bmp_read_header(image, header);
    bi->bb = NULL;

    printf("B: %c | M: %c\nWidth: %d | Height: %d\nBits/pixel: %d\n",
    bi->bh->b, bi->bh->m, bi->bh->width, bi->bh->height, bi->bh->bits);

    delete_bmp_image(bi);

    delete [] header;

  }

  return 0;
}

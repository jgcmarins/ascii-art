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
    //printf("%s\n", image.data());

    ifstream istrm(image, ios::binary);
    if(!istrm.is_open()) {
      printf("Failed to open %s\n", image.data());
    } else {
      printf("%s opened\n", image.data());
      unsigned char *bmp_header = new unsigned char[54];
      istrm.read((char *)bmp_header, 54);
      printf("%s\n", bmp_header);
      delete [] bmp_header;
    }
  }

  return 0;
}

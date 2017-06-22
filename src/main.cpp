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
    printf("You are good to go!\n");
  }

  return 0;
}

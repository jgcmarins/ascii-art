#include "../headers/bmp_header.h"

bmp_header *new_bmp_header() {
  bmp_header *bh = (bmp_header *) malloc(sizeof(bmp_header));
  return bh;
}

void delete_bmp_header(bmp_header *bh) {
  if(bh != NULL) free(bh);
}

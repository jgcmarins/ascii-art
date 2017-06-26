#include "../headers/bmp_image.h"

bmp_image *new_bmp_image() {
  bmp_image *bi = (bmp_image *) malloc(sizeof(bmp_image));
  return bi;
}

void delete_bmp_image(bmp_image *bi) {
  if(bi->bh != NULL) delete_bmp_header(bi->bh);
  if(bi->bb != NULL) delete_bmp_body(bi->bb);
  if(bi != NULL) free(bi);
}

#include "../headers/bmp_body.h"

bmp_body *new_bmp_body() {
  bmp_body *bb = (bmp_body *) malloc(sizeof(bmp_body));
  return bb;
}

void delete_bmp_body(bmp_body *bb) {
  if(bb != NULL) free(bb);
}

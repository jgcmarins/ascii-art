#include "../headers/bmp_body.h"

bmp_body *new_bmp_body(int width, int height, int m, int n) {
  bmp_body *bb = (bmp_body *) malloc(sizeof(bmp_body));
  bb->body = new int * [height];
  for(int i = 0 ; i < height ; i++) bb->body[i] = new int[width];
  bb->width = width;
  bb->height = height;
  bb->m = m;
  bb->n = n;
  return bb;
}

void delete_bmp_body(bmp_body *bb) {
  if(bb->body != NULL) {
    for(int i = 0 ; i < bb->height ; i++) if(bb->body[i] != NULL) delete [] bb->body[i];
    delete [] bb->body;
  }
  if(bb != NULL) free(bb);
}

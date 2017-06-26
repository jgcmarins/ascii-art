#include "../headers/bmp_body.h"

bmp_body *new_bmp_body(int m, int n) {
  bmp_body *bb = (bmp_body *) malloc(sizeof(bmp_body));
  bb->body = new unsigned char[m];
  //for(int i = 0 ; i < m ; i++) bb->body[i] = new unsigned char[n];
  bb->m = m;
  bb->n = n;
  return bb;
}

void delete_bmp_body(bmp_body *bb) {
  if(bb->body != NULL) {
    //for(int i = 0 ; i < bb->m ; i++) delete [] bb->body[i];
    delete [] bb->body;
  }
  if(bb != NULL) free(bb);
}

#ifndef _BMPIMAGE_H_
#define _BMPIMAGE_H_

#include "bmp_header.h"

typedef struct bmp_image {
  bmp_header *bh;
} bmp_image;

bmp_image *new_bmp_image();

void delete_bmp_image(bmp_image *bi);

#endif

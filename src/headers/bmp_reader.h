#ifndef _BMPREADER_H_
#define _BMPREADER_H_

#include "bmp_image.h"

bmp_header *bmp_read_header(string image, unsigned char *header);

bmp_body *bmp_read_body(string image, int width, int height, int m, int n, int bitsperpixel);

#endif

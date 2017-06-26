#ifndef _BMPREADER_H_
#define _BMPREADER_H_

#include "bmp_image.h"

bmp_image *bmp_read(string image);

bmp_header *bmp_read_header(string image);

//bmp_body *bmp_read_body(string image);

#endif

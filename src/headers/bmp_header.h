#ifndef _BMPHEADER_H_
#define _BMPHEADER_H_

#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

#define B_OFFSET 0
#define B_SIZE 1
#define B 'B'
#define M_OFFSET 1
#define M_SIZE 1
#define M 'M'
#define WIDTH_OFFSET 18
#define WIDTH_SIZE 4
#define HEIGHT_OFFSET 22
#define HEIGHT_SIZE 4
#define BITS_OFFSET 28
#define BITS_SIZE 2

typedef struct bmp_header {
  char b; // offset: 0 | size: 1
  char m; // offset: 1 | size: 1
  signed int width; // offset: 18 | size 4
  signed int height; // offset: 22 | size 4
  signed int bits; // offset: 28 | size 2
} bmp_header;

bmp_header *new_bmp_header();

void delete_bmp_header(bmp_header *bh);

#endif

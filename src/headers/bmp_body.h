#ifndef _BMPBODY_H_
#define _BMPBODY_H_

#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

#define BODY_OFFSET 55

typedef struct bmp_body {
  int width;
  int height;
  int m;
  int n;
  int **body;
} bmp_body;

bmp_body *new_bmp_body(int width, int height, int m, int n);

void delete_bmp_body(bmp_body *bb);

#endif

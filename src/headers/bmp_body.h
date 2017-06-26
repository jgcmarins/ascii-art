#ifndef _BMPBODY_H_
#define _BMPBODY_H_

#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

typedef struct bmp_body {
  int m;
  int n;
  unsigned char *body;
} bmp_body;

bmp_body *new_bmp_body(int m, int n);

void delete_bmp_body(bmp_body *bb);

#endif

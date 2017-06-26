#ifndef _BMPHEADER_H_
#define _BMPHEADER_H_

#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

typedef struct bmp_header {
  char b; // offset: 0 | size: 1
  char m; // offset: 1 | size: 1
} bmp_header;

#endif

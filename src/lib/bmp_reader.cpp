#include "../headers/bmp_reader.h"

bmp_header *bmp_read_header(string image, unsigned char *header) {

  ifstream istrm(image, ios::binary);
  if(!istrm.is_open()) printf("Failed to open %s\n", image.data());
  else istrm.read((char *)header, 54);

  bmp_header *bh = new_bmp_header();
  bh->b = header[B_OFFSET];
  bh->m = header[M_OFFSET];
  bh->width = *(int*)&header[WIDTH_OFFSET];
  bh->height = *(int*)&header[HEIGHT_OFFSET];
  bh->bits = *(int*)&header[BITS_OFFSET];

  return bh;
}

bmp_body *bmp_read_body(string image, int width, int height, int m, int n, int bitsperpixel) {
  bmp_body *bb = new_bmp_body(width, height, m, n);

  ifstream istrm(image, ios::binary);
  if(!istrm.is_open()) printf("Failed to open %s\n", image.data());
  else {
    int offset = BODY_OFFSET;
    int k = (bb->height - 1);
    for(int i = 0 ; i < bb->height ; i++) {
      istrm.seekg(offset + (k * bb->width));
      for(int j = 0 ; j < bb->width ; j++) {
        unsigned char cbuf[4];
        istrm.read((char *)cbuf, bitsperpixel/8);
        int color = ((short)cbuf[2]+(short)cbuf[1]+(short)cbuf[0])/3;
        bb->body[i][j] = color;
        offset += bitsperpixel/8;
        istrm.seekg(offset);
      }
      k--;
    }
  }

  return bb;
}

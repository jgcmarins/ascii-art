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

bmp_body *bmp_read_body(string image, int width, int height, int m, int n) {
  bmp_body *bb = new_bmp_body(width, height, m, n);

  ifstream istrm(image, ios::binary);
  if(!istrm.is_open()) printf("Failed to open %s\n", image.data());
  else {
    int offset = BODY_OFFSET;
    istrm.seekg(offset);
    for(int i = 0 ; i < bb->width ; i++) {
      for(int j = 0 ; j < bb->height ; j++) {
        unsigned char cbuf[4];
        istrm.read((char *)cbuf, 4);
        int color = ((short)cbuf[2]+(short)cbuf[1]+(short)cbuf[0])/3;
        bb->body[i][j] = color;
        offset += 4;
        istrm.seekg(offset);
      }
    }
  }

  return bb;
}

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

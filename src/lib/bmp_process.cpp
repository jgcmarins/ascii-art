#include "../headers/bmp_process.h"

void bmp_to_ascii(bmp_image *bi) {
  for(int i = (bi->bb->height - 1) ; i >= 0  ; i -= bi->bb->n) {
    for(int j = 0 ; j < bi->bb->width ; j += bi->bb->m) {
      int color = 0;
      for(int k = 0 ; k < bi->bb->n ; k++) {
        for(int l = 0 ; l < bi->bb->m ; l++) {
          if((i - k) >= 0 && (j + l) < bi->bb->width) color += bi->bb->body[i - k][j + l];
        }
      }
      int pixel = (color/(bi->bb->m * bi->bb->n));
      if(pixel >= 0 && pixel <= 25) printf("#");
      else if(pixel > 25 && pixel <= 50) printf("$");
      else if(pixel > 50 && pixel <= 75) printf("O");
      else if(pixel > 75 && pixel <= 100) printf("=");
      else if(pixel > 100 && pixel <= 125) printf("+");
      else if(pixel > 125 && pixel <= 150) printf("|");
      else if(pixel > 150 && pixel <= 175) printf("-");
      else if(pixel > 175 && pixel <= 200) printf("^");
      else if(pixel > 200 && pixel <= 225) printf(".");
      else if(pixel > 225 && pixel <= 255) printf(" ");
    }
    printf("\n");
  }
}

#include "../headers/bmp_process.h"

void bmp_process_body(bmp_image *bi) {
  for(int i = (bi->bb->height - 1) ; i >= 0  ; i--) {
    for(int j = 0 ; j < bi->bb->width ; j++) {
      int pixel = bi->bb->body[i][j];
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

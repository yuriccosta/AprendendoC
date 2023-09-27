#include <stdio.h>

int main(void) {
 float x, y;

  printf("Colque o valor do ponto x:\t");
  scanf("%f", &x);

  printf("Colque o valor do ponto y:\t");
  scanf("%f", &y);

  (x * x + y * y <= 1.0) ? printf("Está dentro da circuferência\n") : printf("Está fora da circuferência\n");
  
  return 0;
}

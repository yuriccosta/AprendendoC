#include <stdio.h>
#include <math.h>

int main(void) {
  float cat1, cat2, h, a, p;
 
  printf("\nIndique o valor do 1° cateto do triângulo:\t");
  scanf("%f", &cat1);
  printf("\nIndique o valor do 2° cateto do triângulo:\t");
  scanf("%f", &cat2);

  h = sqrt(cat1 * cat1 + cat2 * cat2);
  a = (cat1 * cat2) / 2;
  p = cat1 + cat2 + h;

  printf("\nO valor da hipotenusa deste triângulo é %f", h);
  printf("\nA área do triângulo é %f", a);
  printf("\nO perímetro do triângulo é %f", p);
 
   
  return 0;
}

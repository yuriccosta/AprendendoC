#include <stdio.h>
#include <math.h>

int main(void) {
  float l, d, p, a, raiz;
 
  raiz = sqrt(2);
 
  printf("\nAtribua valor ao lado do quadrado:\t");
  scanf("%f", &l);

  d = l * raiz;
  p = 4 * l;
  a = l * l;

  printf("\nA diagonal deste quadrado é %lf", d);
  printf("\nO perímetro deste quadrado é %f", p);
  printf("\nA área deste quadrado é %f", a);
  return 0;
}

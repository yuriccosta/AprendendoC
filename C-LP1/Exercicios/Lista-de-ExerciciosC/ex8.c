#include <stdio.h>
#include <math.h>

int main(void) {

  float x, y, z;
  
  printf("Digite dois números de ponto flutuante, um para x e outro para y repesctivamente: \n");
  scanf("%f %f", &x, &y);

  /*f(x) x = 5 * x + 2;*/

      (y > x) ? printf("Esta a direita da curva\n\n") : 
      (y < x) ? printf("Esta a esquerda da curva\n\n") :   
      printf("Esta na curva\n\n");
  

// z = Diatância euclidiana

  z = sqrt(x * x + y * y);
      printf("A distância euclidiana é: %f\n", z);

  z = x * y;
  printf("\nEm notação científica: %.2e. \n", z);

  return 0;
}

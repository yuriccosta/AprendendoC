#include <stdio.h>

int main(void) {
  // Letra a)
  int val, N = 1, soma = 0;

  while (N <= 10){
    printf("Entre com o valor %d: ", N);
    scanf("%d", &val);
    soma += val;
    N++;
  }

  printf("A media é %.2f\n", (float)soma / (N -1));
  
  return 0;
}
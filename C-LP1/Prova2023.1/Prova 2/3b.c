#include <stdio.h>

int main(void) {
  // Letra b)
  int val, N = 1, soma = 0;

  for(;N <= 10; N++){
    printf("Entre com o valor %d: ", N);
    scanf("%d", &val);
    soma += val;
  }

  printf("A media é %.2f\n", (float)soma / (N -1));

  return 0;
}
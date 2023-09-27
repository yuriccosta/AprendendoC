#include <stdio.h>

int main(void) {

  int x;

  printf("Escreva um valor inteiro: ");
  scanf("%d", &x);

  x = x % 6 + 1;

  printf("%d\n", x);

  return 0;
}

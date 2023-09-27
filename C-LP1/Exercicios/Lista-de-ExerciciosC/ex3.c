#include <stdio.h>

int main(void) {
 int cha;

  printf("Escreva um número inteiro positivo:");
  scanf("%d", &cha);

  cha = (cha < 0) ? -cha : cha;
  
  (cha >= 32 && cha <= 126) ? printf("O valor em decimal: %d\n octal: %o\n hexadecimal: %x\n caractere: %c\n", cha, cha, cha, cha) :
  (cha < 32) ? printf("O valor em decimal: %d\n octal: %o\n hexadecimal: %x\n caractere: %c\n", 32, 32, 32, 32) :
  (cha = cha % 127 +32) ? printf("O valor em decimal: %d\n octal: %o\n hexadecimal: %x\n caractere: %c\n", cha, cha, cha, cha) : printf("");
  
  return 0;
}

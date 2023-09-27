#include <stdio.h>

int main(void) {
  int a, b, c;
 
  printf("\nAtribua um valor númerico a 'a':\t");
  scanf("%d", &a);

  printf("\nAtribua um valor númerico a 'b':\t");
  scanf("%d", &b);

  c = a + b;

  printf("\na + b em hexadecimal = %x", c);

  c = a * b;

  printf("\na * b em octal = %o", c);

  c = a - b;
 
  (c < 0) ? printf("\n|a - b| = %d", -c) : printf("\n|a - b| = %d", c);

  c = a / b;

  (b == 0) ? printf("\nA divisão a/b não é possível.") : (a%b == 0) ? printf("\na/b = %d", c) : printf("\nA divisão não é exata");
 
  return 0;
}

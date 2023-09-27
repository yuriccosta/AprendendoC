#include <stdio.h>

/* 
Escreva um programa que some uma sequência de números inteiros fornecida pelo usuário. 
Admita que o primeiro inteiro lido especifica a quantidade de valores da sequência.
O programa deve apresentar o resultado da soma parcial
após a entrada de cada novo valor.
*/

int main(void) {
  int c, num, sum = 0;

  printf("Digite quantas vezes vc quer somar: ");
  scanf("%d", &c);
  for (int k = 1; k <= c; k++){
    printf("Digite o número %d: ", k);
    scanf("%d", &num);
    sum += num;
  }

  printf("\nResultado da soma: %d\n", sum);




  
  return 0;
}
#include <stdio.h>

/*
Escreva um programa que calcule e imprima o produto dos n
primeiros números ímpares, sendo n um valor fornecido pelo
usuário. Por exemplo, o produto dos 15 primeiros números ímpares
implica calcular o produto dos ímpares desde 1 até 29.
*/

int main(void) {
  int sum = 0, qt = 0, n;

  printf("Digite até quantos números ímpares deseja somar: ");
  scanf("%d", &n);
  
  for (int c = 1; qt != n; c += 2){
    sum += c;
    qt++;
  }
  
  printf("\nA soma dos números pares até %d é: %d\n", n, sum);

  return 0;
}
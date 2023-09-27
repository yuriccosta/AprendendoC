#include <stdio.h>

/*
Escreva um programa que calcule e imprima a soma dos n primeiros
números inteiros pares, sendo n um valor fornecido pelo usuário.
Por exemplo, a soma dos 15 primeiros números pares implica
calcular a soma dos pares desde 2 até 30. 
*/

int main(void) {
  int sum = 0, qt = 0, n;

  printf("Digite até quantos números pares deseja somar: ");
  scanf("%d", &n);
  
  for (int c = 2; qt != n; c += 2){
    sum += c;
    qt++;
  }
  
  /* solução antiga
  for (int c = 2; qt != n; c++){
    if (c % 2 == 0){
      sum += c;
      qt++;
    }
  }
  */
  
  printf("\nA soma dos números pares até %d é: %d\n", n, sum);

  return 0;
}
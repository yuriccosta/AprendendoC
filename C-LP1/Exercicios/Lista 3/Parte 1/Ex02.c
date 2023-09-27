#include <stdio.h>

/*
Escreva um programa que calcule e imprima a média de vários
valores de ponto flutuante positivos, fornecidos pelo usuário.
Admita que o último valor lido com scanf é o sentinela na forma
de um valor negativo.
*/


int main(void) {
  float c = 0, num = 0, media = 0;

  while (1) {
    printf("Digite um valor de ponto flutuante (-1 para sair): ");
    scanf("%f", &num);
    if (num == -1) break;
    media += num;
    c++;
  }
  
  media /= c;
  printf("\nA media dos valores é: %f\n", media);
  
  return 0;
}
#include <stdio.h>

/*
Escreva um programa que leia um número inteiro, e imprima os
seguintes padrões separadamente, um embaixo do outro. Use laços
para gerar os padrões. Todos os asteriscos devem ser impressos
por uma única instrução printf(‘‘*’’). O número inteiro lido
indica a quantidade de asteriscos nos lados do triângulo (5 nos
padrões mostrados).
*/

int main(void) {
  int num;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);
  printf("\n");
  
  for (int c = 1; c <= num; c++){
    for (int d = 1; d <= c; d++){
      printf("*");
    }
    printf("\n");
  }
  
  printf("\n");

  for (int c = 1; c <= num; c++){
    for (int d = num; d >= c; d--){
      printf("*");
    }
    printf("\n");
  }

  printf("\n");

  for (int c = 1; c <= num; c++){ // num = 5
    for (int d = 1; d < c; d++){ // d <= 5
        printf(" ");
    }
    for (int k = num; k >= c; k--){
        printf("*");
    }
    printf("\n");
  }

  printf("\n");

  for (int c = 1; c <= num; c++){ // num = 5
    for (int d = num; d > c; d--){ // d <= 5
        printf(" ");
    }
    for (int k = 1; k <= c; k++){
        printf("*");
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}
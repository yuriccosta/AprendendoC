#include <stdio.h>

/*
Escreva um programa que encontre o maior valor e o menor valor de
uma lista de inteiros fornecida pelo usuário. 
Admita que o primeiro inteiro lido especifica 
a quantidade de valores da lista.
*/

int main(void) {
  int maior, menor, num, len;

  printf("Digite a quantidade de números a serem lidos: ");
  scanf("%d", &len);
  
  for (int c = 1; c <= len; c++){
    printf("Digite o %d número: ", c);
    scanf("%d", &num);
    if (c == 1){
      maior = num;
      menor = num;
    } else if (num > maior){
      maior = num;
    } else if (num < menor){
      menor = num;
    }
  }

  printf("\nO maior número é: %d e o menor é %d\n", maior, menor);

  return 0;
}
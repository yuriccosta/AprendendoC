/*
Escreva um programa que peça ao usuário para fornecer um número inteiro, obtenha-o da entrada padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um short int. Imprima na tela o valor fornecido, seguido das palavras “e maior que um short int” ou “este valor pertence ao intervalo dos short int”. Use apenas o operador condicional (?).
*/

#include <stdio.h>
#include <limits.h>


int num;


int main(void) {
  printf("Digite um número inteiro:");
  scanf("%d", &num);
  (num > SHRT_MAX || num < SHRT_MIN) ? printf("O número %d é maior que um short int",num) : printf("O número %d pertence ao intervalo dos short int", num);
  return 0;
}

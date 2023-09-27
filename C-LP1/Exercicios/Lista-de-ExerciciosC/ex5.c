/*
Escreva um programa que peça ao usuário para fornecer um número inteiro longo sem sinal, obtenha-o da entrada padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um int. Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo dos int”. Use apenas o operador condicional (?).
*/


#include <stdio.h>
#include <limits.h>

unsigned long int num;


int main(void) {
  printf("Digite um número longo inteiro e sem sinal:");
  scanf("%lu", &num);
  (num > INT_MAX || num < INT_MIN) ? printf("O número %lu é maior que um int\n",num) : printf("O número %lu pertence ao intervalo dos int\n", num);
  return 0;
}

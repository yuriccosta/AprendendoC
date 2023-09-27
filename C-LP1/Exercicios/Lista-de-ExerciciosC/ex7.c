#include <stdio.h>

int main(void){

  int inteiro;
  int soma;

  printf("\nOlá,Usuário! Digite um número inteiro positivo: ");
 scanf("%d",&inteiro);
  
 (inteiro<0) ? printf("\nO número %d foi alterado para o seu módulo, porque o comando foi digitar um número inteiro positivo.\n",inteiro) : 0;
  
  inteiro = (inteiro<0) ? -inteiro: inteiro;
  
  soma = inteiro*(inteiro+1)/2;
  
  printf("\nA soma de todos os números inteiros positivos de 0 e até %d é: %d",inteiro,soma);
  
  return 0;
  
}

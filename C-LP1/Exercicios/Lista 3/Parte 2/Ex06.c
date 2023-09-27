#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Escreva um programa que faça o jogo de “adivinhar o número” da forma que segue:
seu programa escolhe um número para ser adivinhado selecionando um inteiro
aleatório entre 1 e 100 e pede ao jogador para digitar um palpite, logo o programa
mostra uma das respostas seguintes:
a. Excelente! Você adivinhou o número!
b. Muito baixo. Tente novamente.
c. Muito alto. Tente novamente.
Seu programa deve rodar até o jogador acertar o número e então mostrar quantas
tentativas ele utilizou.
*/

int main(void) {
  int num, palpite, tent = 1;
  unsigned seed = time(NULL);
  srand(seed);
  
  num = 1 + rand() % 100;

  printf("Bem vindo, tente acertar um número entre 1 e 100\n");
  while (1){
    printf("\nSeu palpite: ");
    scanf("%d", &palpite);
    if(num == palpite){
      break;
    }else if( num > palpite){
      printf("Muito baixo. Tente novamente.\n");
    } else{
      printf("Muito alto. Tente novamente.\n");
    }
    tent++;
  }
  printf("\n-------------------------------\n");
  printf("Excelente! Você adivinhou o número!\n");
  printf("O número era %d\n", num);
  printf("Você tentou %d vezes\n", tent);
  
  return 0;
}
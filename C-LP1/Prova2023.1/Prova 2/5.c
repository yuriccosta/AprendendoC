#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  /*
   Na prova escrita eu li errado e achei que era
   pra mostrar a soma de todos os dados jogados
   :(
  */
  srand(time(NULL));
  int soma, dado1, dado2, pontos = 0, pontosT = 0;

  while(pontos <= 200 && pontos > -100){
    int jogada;
    printf("Escolha 1-menor, 2-igual, 3-maior: ");
    scanf("%d", &jogada);
    dado1 = (rand() % 6 + 1);
    dado2 = (rand() % 6 + 1);
    soma = dado1 + dado2;
    printf("\nDado 1 = %d - Dado 2 = %d\nSoma dos dados = %d\n", dado1, dado2, soma);

    if (jogada == 1 && 7 > soma)
      pontos += 10;
    else if(jogada == 2){
        if (7 == soma)
          pontos += 20;
        else
          pontos -= 5;
    }
    else if(jogada == 3 && 7 < soma)
      pontos += 10;
    else
      pontos -= 20;

    printf("Sua pontuação: %d\n", pontos);
    pontosT += pontos;
  }

  if( pontos >= 0)
    printf("Você ganhou com %d pontos\n", pontos);
  else
    printf("Você perdeu com %d pontos\n", pontos);

  return 0;
}
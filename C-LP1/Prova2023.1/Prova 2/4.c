#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  srand(time(NULL));
  int soma = 0, pontos = 0;

  for(int c = 1; c <= 10; c++){
    int jogada;
    printf("Escolha 1-menor, 2-igual, 3-maior: ");
    scanf("%d", &jogada);
    soma = (rand() % 6 + 1) + (rand() % 6 + 1);
    printf("Soma: %d \n", soma);

    if (jogada == 1 && 7 > soma)
      pontos += 10;
    else if(jogada == 2 && 7 == soma)
      pontos += 10;
    else if(jogada == 3 && 7 < soma)
      pontos += 10;
    else
      pontos -= 20;
  }

  if( pontos >= 0)
    printf("Você ganhou com %d pontos\n", pontos);
  else
    printf("Você perdeu com %d pontos\n", pontos);

  return 0;
}
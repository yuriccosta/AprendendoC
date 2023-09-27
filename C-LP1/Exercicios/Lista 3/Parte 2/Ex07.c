#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
int a = 0;
int b = 0;
int c = 0;
srand(time(NULL));

printf("\nOlá,Usuário! Pense em um número entre 1 e 100\n");
printf("\nPensou ? Vou adivinhar qual é...\n");

for(int contador = 0;b!=1;contador++){

  c+=1;
  a = 1+rand()%100;
  
  
   
  printf("\nO número que você pensou foi %d ? Se sim (Digite 1 ) ou Se não (Digite 0):  ",a);
  scanf("%d",&b);
  printf("\n--------------------------------------------------------------------------------\n");
 
  if(b==1) {
    printf("\nAcertei o seu número!\n");
    printf("\nPrecisei de %d tentativas para acertar o seu número.\n",c);
    printf("\n*Game Over*\n");
    break;
  }
  
  }

return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int resp, palpite = 50, ultimo = 50, tent = 1;
  

  printf("Bem vindo, escolha um número entre 1 e 100\n");
  printf("Digite 1 para verdadeiro e 0 para falso\n");
  printf("Digite 1 para maior e 0 para menor\n");
  while (1){
    printf("\nEsse número é %d? ", palpite);
    scanf("%d", &resp);
    if(resp){
      break;
    }else {
      printf("É maior (1) ou menor (0) ? ");
      scanf("%d", &resp);
      if (resp){
        palpite = palpite / 2 + ultimo;
      } else{
        palpite = abs(palpite / 2 - ultimo);
      }
    ultimo = palpite;
    }
    tent++;
  }
  printf("\n-------------------------------\n");
  printf("Eu acertei!!\n");
  printf("O número era %d\n", palpite);
  printf("Eu tentei %d vezes\n", tent);
  
  return 0;
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int a = 1;
  int b;
  srand(time(NULL));
  
    printf("\nOlá,querido aluninho! Seja bem-vindo ao Jogo da Multipicação\n");
    printf("\nVamos aprender como multiplicar com números de um dígito ?\n");
 
  while(a!=0){
   
    printf("\nPara parar tecle 0 e para continuar tecle 1:  ");
    scanf("%d",&a);
    
    if(a==0) printf("\n*Game over*\n");
    if(a==0) break;

    int i = 0+rand()%9;
    int j = 0+rand()%9;

    printf("\nQuanto é %d x %d ? ",i,j);
    scanf("%d",&b);
    
    while(b!=i*j){
    
    printf("\nResposta Errada! Tente novamente.\n");
    printf("\nQuanto é %d x %d? ",i,j);
    scanf("%d",&b);
    }
   
    while(b==i*j){
    
    printf("\nMuito bem!!!\n");
    break;
    }
    }
  return 0;
}
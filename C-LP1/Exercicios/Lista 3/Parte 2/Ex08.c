#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
 
  int i;
  int j;
  int k;
  int a;
  int b;
  int c;
  srand(time(NULL));

  printf("\n*Olá! Seja bem-vindo ao Jogo Craps*\n");
  
  for(int contador = 1;contador!=0;contador++) {


  if(contador==1) {
  
  i = 1+rand()%6;
  j = 1+rand()%6;
  k = i+j; 
    
  printf("\nDigite 1 para continuar ou Digite 0 para sair: ");
  scanf("%d",&contador);
  if(contador==0) break;
  printf("\n--------------------------------------------------\n");

  printf("\nJoguei o dados...\n");
  printf("\nNo %dºlançamento, as faces que cairam foram %d e %d.\n",contador,i,j);
    
  }
 
  if(contador==1) {
    
  if(k==2||k==3||k==12) {
   
    printf("\nVocê perdeu! Vitória da Casa.\n");
    printf("\n*Game Over*\n");
    break;
    
  }
 
  if(k==7||k==11) {
    
    printf("\nVocê venceu! Derrota da Casa.\n");
    printf("\n*Game Over*\n");
    break;
    
  }
  
    else {
     
      printf("\nEsse é o seu Ponto!\n");
      
    if(i!=j)printf("\nPara ganhar o jogo você precisa tirar %d e %d ou %d e %d para ganhar o Jogo.\n",i,j,j,i);
    if(i==j)printf("\nPara ganhar o jogo você precisa tirar %d e %d novamente para ganhar o Jogo.\n",i,j);
      
      printf("\nEntretanto, se durante os lançamentos a soma das faces for 7, antes de você tirar a combinação novamente, você perde o Jogo.\n");
      printf("\n--------------------------------------------------\n");
      
    }
    
  }
  
 
  if(contador>1) { 

  a = 1+rand()%6;
  b = 1+rand()%6;
  c = a+b; 
  
  printf("\nVamos para o %dºlançamento...\n",contador);
  printf("\nJoguei o dados...\n");
  printf("\nNo %dºlançamento, as faces que cairam foram %d e %d.\n",contador,a,b);
              
  } 

  if(contador>1) {

    if(c==7) {

      printf("\nVocê perdeu! Vitória da Casa.\n");
      printf("\n*Game Over*\n");
      break;
      
     } 
 
    if((a==i&&b==j)||(a==j&&b==i)) {

      printf("\nVocê venceu! Derrota da Casa.\n");
      printf("\n*Game Over*\n");
      break;
      
     }

    else {
      
      printf("\nAinda não aconteceu nenhuma das duas possibilidades! Jogue os dados novamente.\n");
      printf("\n--------------------------------------------------\n");
      
    }
    
   }
  
  }
  
 return 0;
  
}
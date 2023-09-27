#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  int coroa = 0;
  int cara =  0;
  srand(time(NULL));
  
  for(int contador = 1;contador<=100;contador++){

    int i = 1+rand()%100;
    
    if(i%2==1) {

      printf("%4dºlançamento:Cara",contador);
      cara+=1;
    }
    
    if(i%2==0) {
    
      printf("%4dºlançamento:Coroa",contador);
      coroa+=1;
    }
    
    if(contador%5==0) printf("\n");
    if(contador==100) printf("\nO número de Cara foi: %d\n",cara);
    if(contador==100) printf("O número de Coroa foi: %d\n",coroa);
    
    }
  
  return 0;
}
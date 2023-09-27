#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  int face1=0;
  int face2,face3,face4,face5,face6;
  srand(time(NULL));

  for(int contador = 1;contador<=100;contador++){

    int i = 1+rand()%6;

    switch(i){
      case 1: 
      printf("%4dºlançamento: %d",contador,i);
      face1+=1;
      break;
      case 2:
      printf("%4dºlançamento: %d",contador,i);
      face2+=1;
      break;
      case 3:
      printf("%4dºlançamento: %d",contador,i);
      face3+=1;
      break;
      case 4:
      printf("%4dºlançamento: %d",contador,i);
      face4+=1;
      break;
      case 5:
      printf("%4dºlançamento: %d",contador,i);
      face5+=1;
      break;
      case 6: 
      printf("%4dºlançamento: %d",contador,i);
      face6+=1;
      break;
    }
    if(contador%5==0) printf("\n");
    if(contador==100) {
      printf("\nA quantidade da face1 foi: %d\n",face1);
      printf("A quantidade da face2 foi: %d\n",face2);
      printf("A quantidade da face3 foi: %d\n",face3);
      printf("A quantidade da face4 foi: %d\n",face4);
      printf("A quantidade da face5 foi: %d\n",face5);
      printf("A quantidade da face6 foi: %d\n",face6);
    }
  }
  return 0;
}
#include <stdio.h>

int main(void) {
  int num;
  printf("Começo\n");
  
  for(int c = 1; c <= 100; c++){
    num = c;
    printf("%d em romano é: ", num);

    if(num >= 100){
      printf("C");
      num = num - 100;
    }

    if(num >= 90){
      printf("XC"),
      num = num - 90;
    }

    if(num >= 50){
      printf("L");
      num = num - 50;
    }

    if(num >= 40){
      printf("XL");
      num = num - 40;
    }

    while(num >= 10){
      printf("X");
      num = num - 10; 
    }

    if(num >= 9){
      printf("IX"),
        num = num - 9;
    }

    if(num >= 5){
      printf("V");
      num = num - 5;
    }

    if(num >= 4){
      printf("IV");
      num = num - 4;
    }

    while(num >= 1){
      printf("I");
      num = num - 1;
    }

    printf("\n");
  }
  
  return 0;
}
#include <stdio.h>

int main(void) {
  int a, b ,c;
  
  printf("Trios pitagóricos menores que 500:");

  for(a = 1; a <= 500; a++){
    for(b = a; b <= 500; b++){
      for(c = b; c <= 500; c++){
        if(a*a + b*b == c*c){
          printf("\n%d + %d = %d", a, b, c);
        }
      }
    }
  }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// #include <time.h>

int main(void) {
  //unsigned int seed = time(NULL);
  double p1, p2, areaC, dist;
  unsigned long graoQ = 0, graoC = 0;


  printf("Programa iniciado\n");

  for (unsigned long c = 1/*, i = 1*/; c <= 10000; c++/*, i++*/){
    graoQ++;

    srand(c);
    p1 = 1.0 * rand() / RAND_MAX;
    p1 = -1 + p1 * 2;

    p2 = 1.0 * rand() / RAND_MAX;
    p2 = -1 + p2 *2;

    dist = p1 * p1 + p2 * p2;

    if (dist <= 1) graoC++;



    /*
    printf("P1: %f\n", p1);
    printf("P2: %f\n", p2);

    printf("C: %lu\n", c);
    printf("I: %lu\n", i);
    */
  }

  areaC =  4.0 * graoC / graoQ;
  printf("Grao do quadrado: %lu\n", graoQ);
  printf("Grao do círculo: %lu\n", graoC);
  printf("Area do círculo: %.10f\n", areaC);

  return 0;
}

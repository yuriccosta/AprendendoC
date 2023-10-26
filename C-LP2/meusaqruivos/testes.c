#include <stdio.h>
#include <stdlib.h>

void preencher(int lista[], int n){
    if (n == 0){
        return;
    }
    lista[0] = rand() % 500;
    preencher(lista + 1, n - 1);
}

int main (void){
    int lista[20] = {};
    int a = 10;
    int b = 5;
    int *c = &a;
    int *d = &b;
    printf("\na:%d b:%d   //   c:%d d:%d\n", a, b, *c, *d);
    printf("%ld\n", sizeof(*c));

    *c = 20;
    printf("\na:%d b:%d   //   c:%d d:%d\n", a, b, *c, *d);
    preencher(lista, 20);
    for (int c = 0; c < 20; c++){
        printf("%d: %d\n", c, lista[c] );
    }
    return 0;
}
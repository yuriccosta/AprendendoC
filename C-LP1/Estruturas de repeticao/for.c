#include <stdio.h>


int main(){

    int num = 5, soma = 0;

    
    for (int c = 1; c <= 10; c++){
        printf("Soma %d\n", c);
        soma += num;
    }

    printf("A soma dos números é %d\n", soma);


    return 0;
}
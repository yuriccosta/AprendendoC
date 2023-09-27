#include <stdio.h>


int main(){

    int num = 5, soma = 0, c = 1;

    
    do {
        printf("Soma %d\n", c);
        soma += num;
        c++;
    } while (c <=10);

    printf("A soma dos números é %d\n", soma);


    return 0;
}
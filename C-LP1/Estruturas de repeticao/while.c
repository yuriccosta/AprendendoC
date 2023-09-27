#include <stdio.h>


int main(){
    
    int num = 5, soma = 0, c = 1;


    while (c <=10) {
        printf("Soma %d\n", c);
        soma += num;
        c++;
    }

    printf("A soma dos números é %d\n", soma);


    return 0;
}
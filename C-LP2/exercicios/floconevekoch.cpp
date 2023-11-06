#include <stdio.h>
#include <math.h>
#include <iostream>

// Exercício de Fundamentos Matemáticos para Ciência da Computação
int main() {
    double l;
    double raiz = sqrt(3);
    double resultado;
    
    while(std::cin>>l){
        resultado = (2* l*l * raiz)/5;
        printf("%.2f\n", resultado);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "funcoes.h"


// 1
/*double valorMedioG(double x[]){
    double media = 0;
    for (int c = 0; c < N; c++){
        media += x[c];
    }
    media = 1.0/N * media;
    return media;
}*/

// 2
/*double desvioPadraoG(double x[]){
    double sum = 0;
    for (int c = 0; c < N; c++){
        sum += (x[c] - valorMedioG(x)) * (x[c] - valorMedioG(x));
    }

    double desvio;
    desvio = sqrt(1.0/N * sum);
    return desvio;
}*/

//4
double valorMedioG(double x[], int n){
    double media = 0;
    for (int c = 0; c < n; c++){
        media += x[c];
    }
    media = 1.0/n * media;
    return media;
}

// 5
double desvioPadraoG(double x[], int n){
    double sum = 0;
    for (int c = 0; c < n; c++){
        sum += (x[c] - valorMedioG(x, n)) * (x[c] - valorMedioG(x, n));
    }

    double desvio;
    desvio = sqrt(1.0/n * sum);
    return desvio;
}

// 6
void normaliza(double x[], int n){
    for (int c = 0; c < n; c++){
        x[c] = 0; // alguma conta de normalização
    }
}

// 7
int main(void){
    // b)
    int num;
    printf("Digite a quantidade de elementos a serem analisados: ");
    scanf("%d", &num);

    //c)
    srand(time(NULL));
    double x[num];
    for (int c = 0; c < num; c++){
        x[c] =  (2.0 * rand()/RAND_MAX);
        printf("%d: %f ", c, x[c]);
    }

    //d)
    printf("\n\nMedia dos valores: %f\n", valorMedioG(x, num));
    printf("Desvio padrão: %f\n", desvioPadraoG(x, num));
    normaliza(x, num);
    for (int c = 0; c < num; c++){
        printf("%d: %f ", c, x[c]);
    }
    printf("Media dos valores depois de normalizado: %f\n", valorMedioG(x, num));
    return 0;
}

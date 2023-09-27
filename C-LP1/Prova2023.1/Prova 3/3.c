#include <stdio.h>
#define N 10
int main(void){
    int dig[N] = {0,1,2,3,4,5,6,7,8,9};
    double val[N] = {0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
    char car[N] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h', 'i', 'j' };
    for (int i = 0; i < N/2; i++){
        int troca = dig[i];
        dig[i] = dig[N - 1 - i];
        dig[N-1-i] = troca;
    }
    // Letra a) {9,8,7,6,5,4,3,2,1,0}

    for (int i = 0; i < N; i++){
        val[i] = val[i] + dig[i];
        printf("%c %lf ", car[dig[i]], val[i]);
    }
    printf("\n");
    /*Letra b) Saída = j 9.000000 i 9.000000 h 9.000000 g 9.000000 f 9.000000 e 9.000000 d 9.000000 c 9.000000 b 9.000000 a 9.000000
    Na prova, pelo que eu lembro, esqueci de considerar o array modificado para o car[dig[i]] 
    e acabou printando o array car da posição 0 até a 9 ao invés de da 9 até a 0 
    */

    // Letra c)
    for (int c = 0; c < N; c++){
        if (c > 3){
            car[c] = '\0';
        }
    }
    printf("Nova string: %s\n", car);
    
    return 0;
}

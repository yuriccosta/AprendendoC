#include <stdio.h>



/*
Professor, quando eu fui fazer a prova eu considerei que teria que contar quantos zeros tinha
no array, até porque a função tem o nome quantZero. Então aqui eu deixei do mesmo jeito, mas é só trocar
as condições == 0, por != 0, caso seja pra contar quantos são diferentes de zero
*/


//testar com vet[] = {0,0,2,3} e n = 4
int quantZero(int vet[], int n){
    int q = 0;
    for (int c = 0; c < n; c++){
        if (vet[c] == 0) q++;
    }
    return q;
}

//testar com vet[] = {0,0,2,3} e n = 4
int quantZeroR(int vet[], int n){
    int q = 0;
    if (n == 0){return 0;
    } else if (n == 1){
        if (vet[n - 1] == 0){
            q = 1;
        }
        return q;
    } else{
        if (vet[n - 1] == 0){
            q = 1;
        }
        return q + quantZeroR(vet, n - 1);
    }
}

int main(void){
    int vet[] = {1,0,2,0,8};
    printf("%d\n", quantZero(vet, 5));
    printf("%d\n", quantZeroR(vet, 5));
    return 0;
}
#include <stdio.h>

int quantZero(int vet[], int n){
    int q = 0;
    for (int c = 0; c < n; c++){
        if (vet[c] == 0) q++;
    }
    return q;
}

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
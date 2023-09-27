#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50
int main(void){
    
    double notas[N];
    int freq[6] = {};
    srand(time(NULL));
    printf("Entre com a nota dos alunos\n");
    for (int i = 0; i < N; i++){
        //Letra a
        printf("Nota do aluno %d: ", i + 1);
        scanf("%lf", &notas[i]);
        freq[(int)notas[i]]++;
    }
    //Letra b
    for (int c = 0; c < 6; c++){
        printf("Classe %d com: %d notas\n", c, freq[c]);
    }
    // Letra c
    int tot = 0;
    for (int k = 0; k < 3; k++){
        tot += freq[k];
    }
    printf("Total de notas menores que 3: %d\n", tot);
    // Letra d
    double soma = 0;
    for (int d = 0; d < N; d++){
        soma += notas[d];
    }
    printf("Média da turma: %lf\n", soma / N);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int ** geraImagem(int lin, int col){
    int ** img = (int**) malloc(sizeof(int*) * lin);

    for (int i = 0; i < lin; i++){
        img[i] = (int*) malloc(sizeof(int) * col);
    }

    for (int i = 0; i < lin; i++){
        for (int j = 0 ;j < col; j++){
            img[i][j] = rand() % 256;
        }
    }

    return img;
}

int ** filtroMaximo(int ** img, int lin, int col){
    int ** filtro = (int**) malloc(sizeof(int*) * lin);
    for (int i = 0; i < lin; i++){
        filtro[i] = (int*) malloc(sizeof(int) * col);
    }

    for (int i = 1; i < lin - 1; i++){
        for (int j = 1; j < col - 1; j++){
            int max = img[i - 1][j - 1];
            for(int d = i - 1; d <= i + 1; d++){
                for(int k = j - 1; k <= j + 1; k++){
                    if (max < img[d][k]) max = img[d][k];
                }
            }
            filtro[i][j] = max;
        }
    }

    for (int i = 0; i < lin; i++){
        filtro[i][0] = img[i][0];
        filtro[i][col - 1] = img[i][col - 1];
    }

    for (int j = 0; j < col; j++){
        filtro[0][j] = img[0][j];
        filtro[lin - 1][j] = img[lin - 1][j];
    }

    return filtro;
}

// Função feita a parte para mostrar os valores da imagem
void printimg(int ** img,int lin, int col){
    for(int i = 0;i< lin;i++){
        for(int j = 0;j < col;j++){
            printf("%d ", img[i][j]);

            if(img[i][j] < 10){ 
                printf("   ");
            } else if (img[i][j] < 100) {
                printf("  ");
            }else{
                printf(" ");
            }

            if (j == col -1){
                printf("\n");
            }
        }
    }
}


int main(void){
    int lin = 10, col = 15;
    int **img = geraImagem(lin, col);
    int **filtro = filtroMaximo(img, lin, col);

    printf("\nNormal:\n");
    printimg(img, lin, col);
    printf("\nFiltrada:\n");
    printimg(filtro, lin, col);

    return 0;
}
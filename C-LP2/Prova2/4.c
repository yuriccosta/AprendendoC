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
    int ** img = geraImagem(lin, col);
    printimg(img, lin, col);
    return 0;
}
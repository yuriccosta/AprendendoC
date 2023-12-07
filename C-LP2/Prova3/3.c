#include <stdio.h>
#include <stdlib.h>


int guardaImagem(unsigned char img[][10], int lin, int col, char* fileName){
    FILE * fp = fopen(fileName, "wb");

    if (fp == NULL) return 1;

    fwrite(&lin, sizeof(int), 1, fp);
    fwrite(&col, sizeof(int), 1, fp);

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            fwrite(&img[i][j], sizeof(unsigned char),1, fp);
        }
    }

    if(fclose(fp)) return 2;

    return 0;
}

int main(void){
    unsigned char img[10][10] = {0};
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            img[i][j] = rand() % 256;
            printf("%d ", img[i][j]);
        }
        printf("\n");
    }

    guardaImagem(img, 10, 10, "imagem.bin");

    return 0;
}
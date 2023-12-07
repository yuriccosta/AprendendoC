#include <stdio.h>
#include <stdlib.h>


unsigned char** carregaImagem(int* lin, int* col, char* fileName){
    FILE * fp = fopen(fileName, "rb");

    if (fp == NULL) return NULL;

    fread(lin, sizeof(int), 1, fp);
    fread(col, sizeof(int), 1, fp);

    unsigned char ** img = malloc(sizeof(unsigned char *) * (*lin));
    for (int c = 0; c < *lin; c++){
        img[c] = malloc(sizeof(unsigned char) * (*col));
    }

    for (int i = 0; i < *lin; i++){
        for (int j = 0; j < *col; j++){
            fread(&img[i][j], sizeof(unsigned char),1, fp);
        }
    }

    fclose(fp);
    return img;
}

int main(void){
    int lin;
    int col;

    unsigned char ** img;
    img = carregaImagem(&lin, &col, "imagem.bin");
    
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", img[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct pixel {
    unsigned char r;
    unsigned char g;
    unsigned char b;
} Pixel;

Pixel* geraImagem(int lin, int col){

    int tam = lin * col;
    Pixel *imagem = (Pixel*) malloc(tam * sizeof(Pixel));
    for(int i = 0; i < tam; i++){
        imagem[i].r = 1+rand()%255;
        imagem[i].g = 1+rand()%255;
        imagem[i].b = 1+rand()%255;
    }

  return imagem;
}




int main(void){
    geraImagem(640, 480);
    printf("%ld\n", sizeof(Pixel));
    printf("%ld\n", 3 * sizeof(unsigned char));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* geraPalavra(int tam){
    if(tam < 2) tam = 2;
    char *pal = (char*) malloc(sizeof(char) * (tam + 1));

    char conso[] = "bcdfghjklmnpqrstvwxyz";
    char vog[] = "aeiou";

    for(int c = 0; c < tam; c++){
        if (c % 2 == 0){
            pal[c] = conso[rand() % 21];
        } else{
            pal[c] = vog[rand() % 5];
        }
    }

    pal[tam] = '\0';
    return pal;
}

int main(void){
    srand(time(NULL));
    printf("\nPalavra: %s\n", geraPalavra(3));
    return 0;
}
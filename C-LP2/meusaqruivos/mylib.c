#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *appendstr(char *array, char *string){

    int lena = strlen(array) + 1;
    int lens = strlen(string) + 1;

    char *strappend = (char*) malloc(sizeof(char) * (lena + lens));

    int c = 0;
    for (; c < lena; c++){
        strappend[c] = array[c];
    }
    c--;

    for (int d = 0; d <= lens; d++){
        strappend[c++] = string[d];
    }

    free(array);
    return strappend;
}

int *appendint(int *array, int *vet, int tam1, int tam2){
    int *intappend = (int*) malloc(sizeof(int) * (tam1 + tam2));

    int c = 0;
    for (; c < tam1; c++){
        intappend[c] = array[c];
    }
    c--;

    for (int d = 0; d <= tam2; d++){
        intappend[c++] = vet[d];
    }
    
    free(array);
    return intappend;
}

int main(void){
    char *array = (char*) malloc(sizeof(char) * 4);
    char string[10] = " mae";
    printf("%ld\n", sizeof(string));
    int teste[10];
    printf("%ld\n", sizeof(teste));
    for(int c = 0; c < 4; c++){
        array[c] = "ola"[c];
    }
    
    printf("1 String: %s\n", array);

    array = appendstr(array, string);
    printf("2 String: %s\n", array);

}

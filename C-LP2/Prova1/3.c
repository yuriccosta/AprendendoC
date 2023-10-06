#include <stdio.h>

int strlenc(char str[]){
    int len = 0;
    for (int c = 0; str[c] != '\0'; c++){
        len++;
    }
    return len;
}


int main(void){
    printf("%d\n", strlenc("yuri"));
    return 0;
}
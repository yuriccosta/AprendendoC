#include <stdio.h>

int strcmpR(char str1[], char str2[]){
    if (str1[0] == '\0' || str2[0] == '\0'){
        return str1[0] - str2[0];
    } else if (str1[0] != str2[0]){
        return str1[0] - str2[0];
    } else{
        return strcmpR(str1 + 1, str2 + 1);
    }


}

int strcmpY(char str1[], char str2[]){
    int dif = 0, c = 0;
    while (str1[c] != '\0' && str2[c] != '\0'){
        if (str1[c] != str2[c]) break;
        c++;
    }
    dif = str1[c] - str2[c];
    return dif;
    
}

int main(void){
    printf("%d\n", strcmpR("aba", "aaz"));
    printf("%d\n", strcmpY("aba", "aaz"));
    return 0;
}
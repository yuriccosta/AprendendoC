#include <stdio.h>


int main (void){
    int num, tmp;
    char ch1, ch10, ch100;
    printf("Digite um numero entre 0 e 1000 ");
    scanf("%d", &num);
    tmp = num = (num > 0 && num < 1000) ? num:567;
    ch1 = (tmp % 2 == 0) ? 'P': 'I';
    tmp = num/10;
    ch10 = (tmp == 0) ? ' ' : (tmp % 2 == 0) ? 'P': 'I';
    tmp = 1.0*num/100;
    ch100 = (tmp == 0) ? ' ': (tmp % 2 == 0) ? 'P' : 'I';
    printf("Numero: %d - %c%c%c\n", num, ch100, ch10, ch1);
    return 0;
}
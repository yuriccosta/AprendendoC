#include <stdio.h>

int num1, num2;

int main(void) {
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    (num1 > num2) ? printf("%d e maior\n", num1) : 
        (num2 > num1) ? printf("%d e maior\n", num2) :
            printf("estes numeros são iguais\n");

    (num1 > num2 && num2 != 0) ? printf("%d\n", num1/num2) : 
        (num2 > num1 && num1 != 0) ? printf("%d\n", num2/num1) :
            printf("Operação incorreta\n");
}
#include <stdio.h>


int main (void){
    int num, chconvert;
    char ch, numconvert;
    /* 
    Caso ocorra uma leitura de um qualquer tipo de dado e em seguida leia-se um inteiro
    O código não funciona da maneira esperada, pois quando apertamos a tecla ENTER para confirmar o dado anterior
    Essa tecla ENTER também é um caractere e ela fica no buffer do teclado.
 
    Exemplo: lemos o inteiro 4 e apertamos ENTER. Quando for fazer a leitura do caractere ele irá seguir automaticamente sem você ter digitado nada
    Pois o que ficou no buffer do teclado é 4\n e \n é um caractere.

    Para resolver o problema basta inverter as ordens de leitura (que foi o que eu fiz), ou limpar o buffer do teclado, lendo um caractere sem salvar.
    */
    printf("Digite um caractere: ");
    scanf("%c", &ch);
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    numconvert = num + '0';
    chconvert = ch - '0';

    printf("Numero convertido: '%c'\n", numconvert);
    printf("Caractere convertido: %d\n", chconvert);

    return 0;
}

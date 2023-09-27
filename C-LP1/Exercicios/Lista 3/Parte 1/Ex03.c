#include <stdio.h>

/*
Escreva um programa que some uma sequência de números de ponto
flutuante fornecida pelo usuário. A sequência de entrada será
interrompida quando a diferença entre dois valores fornecidos
consecutivamente seja maior do que 1.O programa deve apresentar,
no final, o resultado da média dos valores  fornecidos,
excluindo o último valor. 
*/

int main(void) {
  float num = 0, oldnum = 0, media = 0, c = 0;

  while (1){
    printf("Digite um número de ponto flutuante: ");
    scanf("%f", &num);
    
    if (c != 0) if (num - oldnum > 1.0) break;
  
    media += num;
    oldnum = num;
    c++;
  }

  media /= c;

  printf("\nA media dos valores digitados é: %f\n", media);

  return 0;
}
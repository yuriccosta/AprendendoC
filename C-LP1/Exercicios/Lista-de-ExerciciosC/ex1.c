/*
Escreva um programa que:
Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e ch3  mas você pode escolher outro identificador se achar mais apropriado;
Peça ao usuário para digitar um caractere, obtenha o mesmo da entrada padrão, usando scanf,  e atribua o valor digitado à variável ch1;
Verifique, utilizando o operador condicional (?) se se trata de:
uma letra maiúscula;
uma letra minúscula;
um dígito;
outro tipo de caractere;
Atribua à variável ch2 o caractere 81, identifique e imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;
Dado que o caractere ch2 é uma letra maiúscula, atribua à variável ch3 o caractere que corresponde à mesma letra minúscula (não pode procurar na tabela ASCII) e Imprima ch3 na tela, utilizando printf, em formato numérico  decimal, octal, hexadecimal e como caractere;
*/
#include <stdio.h>


//a)
char ch1,  ch2,  ch3;


int main(void){
  //b)
  printf("Olá, digite um caractere: ");
  scanf("%c", &ch1);
  //c)
  (ch1 >= 'A' && ch1 <= 'Z')? printf("A letra '%c' é maíscula\n", ch1): 
  (ch1 >= 'a' && ch1 <= 'z')? printf("A letra '%c' é minúscula\n", ch1):
  (ch1 >= '0' && ch1 <= '9') ? printf("O '%c' é um dígito\n", ch1): 
  printf("O '%c' é um outro tipo de caractere além dos comumente utilizados\n", ch1);
  //d)
  ch2 = 81;
  printf("\nCaractere %d em decimal: %d\n", ch2, ch2);
  printf("Caractere %d em octal: %o\n", ch2, ch2);
  printf("Caractere %d em hexadecimal: %x\n", ch2, ch2);
  printf("Caractere %d em caractere normal: %c\n", ch2, ch2);
  //e)
  ch3 = ch2+ ('a' - 'A');
  printf("\nCaractere %d em decimal: %d\n", ch3, ch3);
  printf("Caractere %d em octal: %o\n", ch3, ch3);
  printf("Caractere %d em hexadecimal: %x\n", ch3, ch3);
  printf("Caractere %d em caractere normal: %c\n", ch3, ch3);
  return 0;
}

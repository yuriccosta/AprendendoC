/*
 Escreva um programa que: 
Leia da entrada padrão as notas dos 5 créditos da disciplina CET635-LPI e calcule a média do semestre. Imprima o resultado na tela;
dependendo da média calculada anteriormente, determine se o aluno está de prova final ou não;
se o aluno estiver de prova final, leia a nota da prova final e calcule a média do semestre;
Imprima a nota final do aluno na disciplina;
*/


#include <stdio.h>


float not1, not2, not3, not4, not5, med, final;


int main(void) {
  //a)
  printf("Digite a nota 1:");
  scanf("%f", &not1);
  printf("Digite a nota 2:");
  scanf("%f", &not2);
  printf("Digite a nota 3:");
  scanf("%f", &not3);
  printf("Digite a nota 4:");
  scanf("%f", &not4);
  printf("Digite a nota 5:");
  scanf("%f", &not5);
  med = (not1 + not2 + not3 + not4 + not5) / 5;
  printf("\nA sua média é: %.2f\n", med);
  
  //b)
  final = (med < 7) ? 1 : 0;
  (final == 1) ? printf("Você está de prova final\nDigite a nota da prova final:") : printf("Você não está de prova final.\n");
  
  //c)
  (final == 1) ? scanf("%f", &not1) : 0;
  med = ((med * 5) + not1) / 6;
  
  //d)
  (final == 1) ? printf("Sua média final é: %.2f", med): 0;
  
  return 0;
}

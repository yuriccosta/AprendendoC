#include <stdio.h>

int main(void){

  float x1;
  float y1;
  float x2;
  float y2;
  float a;
  float b;

  printf("\nOlá,Usuário! Digite um valor para X1: ");
  scanf("%f",&x1);
  printf("\nDigite um valor para Y1: ");
  scanf("%f",&y1);
  printf("\nDigite um valor para X2: ");
  scanf("%f",&x2);
  printf("\nDigite um valor para Y2: ");
  scanf("%f",&y2);
  
  a = (y2-y1)/(x2-x1);
  b = (a<0) ? y2+x2*(-a) : y2-x2*a;

  printf("\nO valor de a é: %f\n",a);
  printf("\nO valor de b é: %f\n",b);

  (a!=0) ? printf("\nA função polinomial do 1ºgrau que passa pelos pontos (%f,%f) e (%f,%f) é f(x) = %fx+%f\n",x1,y1,x2,y2,a,b) : printf("\nComo o valor de a é igual a 0 deixou de ser uma função polinomial do 1ºgrau e passou a ser uma função constante.Logo,não há nehuma reta que passe ao mesmo tempo pelos pontos (%f,%f) e (%f,%f).\n",x1,y1,x2,y2);
  
  return 0;
  
}

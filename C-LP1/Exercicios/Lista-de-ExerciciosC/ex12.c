#include <stdio.h>
#include <math.h>

int main(void){

  float a;
  float b;
  float c;
  float delta;
  float px;
  float x;
  float x1;
  float raiz1;
  float raiz2;
  

  printf("\nOlá,Usuário!Digite um valor para o coeficiente a: ");
  scanf("%f",&a);
  printf("\nDigite um valor para o coeficiente b: ");
  scanf("%f",&b);
  printf("\nDigite um valor para o coeficiente c: ");
  scanf("%f",&c);

  (a==0) ? printf("\nO valor do a tem que ser diferente de 0,digite um novo valor para o a: "), scanf("%f",&a) : 0;

  printf("\n%f",a);
  
  delta = b*b-4*a*c;
  
  printf("\n%f\n",delta);
  
  (delta>=0) ? raiz1 = -(b) + sqrt(delta)/2*a, 
  raiz2 = -(b) - sqrt(delta)/2*a : 0;
 
  (delta>0) ? printf("\nO polinômio P(x) tem duas raízes reais e distintas e elas são %f e %f.\n",raiz1,raiz2) : 
  (delta==0) ? printf("\nO polinômio P(x) tem duas raízes reais, porém elas são iguais e o valor delas é %f.\n",raiz1) : (delta<0) ? printf("\nO polinômio P(x) não possui raízes reais.\n") : 0;

  (delta>=0) ? printf("\nAgora,digite um valor para x: ") ,scanf("%f",&x) : 0;
  
  px = a*x*x+b*x+c;
  
 (delta>=0) ? printf("\nO valor de P(%f) = %f\n",x,px) : 0;

  return 0;

  
}

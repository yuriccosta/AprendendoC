#include <stdio.h>
#include <math.h>

int main(void){

double pi;
double a = 0;
int contador;
int i;
  
printf("\nOlá,Usuário! Entre com a quantidade de termos da sequência: ");
scanf("%d",&i);

for( contador = 0;contador<i;contador++){

   pi = 4*(pow(-1,contador))/(2*contador+1);
  a+=pi;
  printf("\nO valor de pi para i = %d é: %lf\n",contador,pi);
  



} 
 if(contador==i) {

   printf("\n---------------------------------------\n");
   printf("\nO somatório dos valores de pi é: %lf\n",a);
   printf("\nO valor de pi de acordo com a biblioteca <math.h>: %lf\n",M_PI);
  
  if(a>M_PI) printf("\nA precisão do valor calculado foi de: %lf\n",a-M_PI);
  if(a==M_PI) printf("\nA precisão do valor calculado foi de: %lf\n",a-M_PI);
  if(a<M_PI) printf("\nA precisão do valor calculado foi de: %lf\n",M_PI-a); 
}
  return 0;
}
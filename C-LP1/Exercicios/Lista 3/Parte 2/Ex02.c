#include <stdio.h>
#include <math.h>

int main(void){

int n;
int contador;
double pi;
double a = 0;

printf("\nOlá,Usuário!Entre com a quantidade de termos da sequência: ");
scanf("%d",&n);

  for(contador = 0;contador<n;contador++){

    pi = (1/pow(16,contador))*(4.0/(8*n+1)-2.0/(8*n+4)-1.0/(8*n+5)-1.0/(8*n+6)); 
    a+=pi;
    printf("\nO valor de pi para n = %d é: %lf\n",contador,pi);

  
  }

  if(contador==n) {

   printf("\n---------------------------------------\n");
   printf("\nO somatório dos valores de pi é: %lf\n",a);
   printf("\nO valor de pi de acordo com a biblioteca <math.h>: %lf\n",M_PI);
  
  if(a>M_PI) printf("\nA precisão do valor calculado foi de: %lf\n",a-M_PI);
  if(a==M_PI) printf("\nA precisão do valor calculado foi de: %lf\n",a-M_PI);
  if(a<M_PI) printf("\nA precisão do valor calculado foi de: %lf\n",M_PI-a);

  }
  
  return 0;
  
}
#include <stdio.h>

/*
Uma loja de venda de produtos pela internet, vende 5 produtos cujos preços são mostrados na tabela a seguir:
Escreva um programa para processar as vendas de uma semana, de segunda a sábado. 
Seu programa deve ler, para cada dia da semana, o número
que identifica cada produto e a quantidade vendida nesse dia.

No final o programa deve apresentar:
a. total de ı́tens vendidos na semana,
b. lucro total da semana,
c. dia de maior lucro de venda,
d. produto campeão da semana (o produto que deu mais lucros).

Nota: Seu programa deve utilizar uma instrução switch para
identificar os produtos. O lucro se calcula com a diferença
entre o preço de varejo e o custo,
multiplicado pela quantidade de itens vendidos.
*/

int main(void) {
  int  dmaxluc = 1, champrod, qt, venT = 0;
  float cust, price, luc, lucday, oldlucday, lucT = 0;
  float lid1 = 0, lid2 = 0, lid3 = 0, lid4 = 0, lid5 = 0;


  
  for (int c = 1; c <= 6; c++){
    printf("\nDia da semana: %d\n", c);
    lucday = 0;
    
    for (int id = 1; id <= 5; id++){
      printf("\nDigite a quantidade vendida do produto referente ao id: %d ", id);
      scanf("%d", &qt);
      
      switch (id){
        case 1:
          cust = 1.55;
          price = 2.98;
          luc = price - cust;
          lid1 += luc * qt;
          break;
        case 2:
          cust = 2.27;
          price = 4.50;
          luc = price - cust;
          lid2 += luc * qt;
          break;
        case 3:
          cust = 5.47;
          price = 9.99;
          luc = price - cust;
          lid3 += luc * qt;
          break;
        case 4:
          cust = 3.80;
          price = 4.49;
          luc = price - cust;
          lid4 += luc * qt;
          break;
        case 5:
          cust = 3.15;
          price = 6.87;
          luc = price - cust;
          lid5 += luc * qt;
          break;
      }

      venT += qt;
      lucday += luc * qt;
      lucT += luc * qt;
    }
    
    if (lucday > oldlucday) dmaxluc = c;
    oldlucday = lucday;
  }

  float lidmax = lid1;
  
  while (1){
    if (lidmax < lid2){
      lidmax = lid2;
    } else if (lidmax < lid3){
      lidmax = lid3;
    } else if (lidmax < lid4){
      lidmax = lid4;
    } else if (lidmax < lid5){
      lidmax = lid5;
    } else{
      break;
    }
  }

  if (lidmax == lid1){
    champrod = 1;
  } else if (lidmax == lid2){
    champrod = 2;
  } else if (lidmax == lid3){
    champrod = 3;
  } else if (lidmax == lid4){
    champrod = 4;
  } else{
    champrod = 5;
  }
  
  
  printf("\nO total de produtos vendidos na semana foi: %d\n", venT);
  printf("O lucro total foi: R$%.2f\n", lucT);
  printf("O dia de mais lucro da semana foi: %d\n", dmaxluc);
  printf("O produto que mais deu lucros foi o (id) %d", champrod);
  
  return 0;
}
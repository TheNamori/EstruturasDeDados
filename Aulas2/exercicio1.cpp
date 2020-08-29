#include <stdio.h>

int main(void) {
  float valorSalario, valorFinanciamento;

  printf("Qual o valor do seu salário? \n");
  scanf("%f", &valorSalario);
  
  printf("Quanto deseja financiar? \n");
  scanf("%f", &valorFinanciamento);

  if(valorSalario * 5 >= valorFinanciamento )
    printf("Financiamento Concedido.");
  else
    printf("Financiamento Negado.");
}
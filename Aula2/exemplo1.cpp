#include <stdio.h>
#include <stdlib.h>
int main()
{
  float vs, vf;
  printf("\nDigite o valor do salario: ");
  scanf("%f", &vs);
  printf("\nDigite o financiamento pretendido: ");
  scanf("%f", &vf);
  if (vf <= vs * 5)
    printf("\nFinanciamento Concedido");
  else
    printf("\nFinanciamento Negado");
  printf("\nObrigado por consultar");
}
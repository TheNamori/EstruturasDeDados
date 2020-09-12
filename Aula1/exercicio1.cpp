#include <stdio.h>
#include <stdlib.h>
int main()
{
  float VH, NH, PDI, SB, VD, SL;
  printf("Digite o valor do salario, numero de horas e %% de desconto (Valores separados por espaco): ");
  scanf("%f %f %f", &VH, &NH, &PDI);
  SB = VH * NH;
  VD = SB / 100 * PDI;
  SL = SB - VD;
  printf("\nO valor do salario bruto e: %f", SB);
  printf("\nO valor de desconto e: %f", VD);
  printf("\nO valor do salario liquido e: %f\n", SL);
}
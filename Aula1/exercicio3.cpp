#include <stdio.h>
#include <stdlib.h>
int main()
{
  float C, F;
  printf("\nDigite uma temperatura em Fahrenheit: ");
  scanf("%f", &F);
  C = (F - 32.0) * 5.0 / 9.0;
  printf("\nA temperatura em graus Celsios e: %f", C);
}
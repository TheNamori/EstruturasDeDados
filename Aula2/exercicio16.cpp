#include <stdio.h>
#include <stdlib.h>
#include "exercicio16.h"

int main()
{
  float raio;
  printf("Digite o raio de um circulo: ");
  scanf("%f", &raio);
  printf("\nA area do circulo e: %.2f\n\n", area(raio));
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
  float BMaior, BMenor, Altura, AT;
  printf("\nDigite a base menor, base maior e altura de um trapezio: ");
  scanf("%f, %f, %f", &BMaior, &BMenor, &Altura);
  AT = (BMaior + BMenor) * Altura / 2;
  printf("\nA area do Trapezio e: %f", AT);
}
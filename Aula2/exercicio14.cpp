#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
float area(float);
int main()
{
  float raio;
  printf("Digite o raio de um circulo: ");
  scanf("%f", &raio);
  printf("\nA area do circulo e: %.2f\n\n", area(raio));
  return 0;
}
float area(float raio)
{
  return PI * raio * raio;
}
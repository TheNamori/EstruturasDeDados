/*Cálculo do IMC */
#include <stdio.h>
#include <stdlib.h>
int main()
{
  float peso, altura, imc;
  printf("Digite sua massa corpórea em kg: ");
  scanf("%f", &peso);
  printf("\nDigite sua altura em metros: ");
  scanf("%f", &altura);
  imc = peso / (altura * altura);
  printf("\n\n\Seu imc é %f.", imc);
  if (imc > 25) /* Toma uma decisão caso imc > 25 */
    printf("\n\n\nVocê precisa emagrecer!");
}
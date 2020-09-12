/* Imprime o dia da semana a partir de uma data */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* para getch()*/
int main()
{
  int dia, mes, ano, dSemana;
  printf("Digite a data na forma dd/mm/aaaa: ");
  scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
  dSemana = ano + dia + 3 * (mes - 1) - 1;
  if (mes < 3)
    ano--;
  else
    dSemana -= (int)(0.4 * mes + 2.3);
  dSemana += (int)(ano / 4) - (int)((ano / 100 + 1) * 0.75);
  dSemana %= 7;
  switch (dSemana)
  {
  case 0:
    printf("Domingo");
    break;
  case 1:
    printf("Segunda-feira");
    break;
  case 2:
    printf("Terca-feira");
    break;
  case 3:
    printf("Quarta-feira");
    break;
  case 4:
    printf("Quinta-feira");
    break;
  case 5:
    printf("Sexta-feira");
    break;
  case 6:
    printf("Sabado");
    break;
  default:
    printf("Invalido");
    break;
  }
  return 0;
}
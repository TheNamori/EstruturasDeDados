#include <stdio.h>
#include <stdlib.h>
int main()
{
  float n1, n2, media;
  int faltas;
  printf("\nDigite a nota da 1 prova: ");
  scanf("%f", &n1);
  printf("\nDigite a nota da 2 prova: ");
  scanf("%f", &n2);
  printf("\nDigite o numero de faltas no semestre: ");
  scanf("%d", &faltas);
  media = (n1 + n2) / 2;
  if (media >= 6 && faltas <= 10)
    printf("\nAluno aprovado com media %f e %d faltas", media, faltas);
  else
    printf("\nAluno reprovado com media %f e %d faltas", media, faltas);
}
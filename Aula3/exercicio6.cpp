#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10
void imprime(int[], int);
int main()
{
  int vetor[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
  for (i = 0; i < TAMANHO; i++)
    imprime(vetor, i);
  printf("\n\n");
  return 0;
}
void imprime(int vetor[], int i)
{
  printf("%d ", vetor[i]);
}
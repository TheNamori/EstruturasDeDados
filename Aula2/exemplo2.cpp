#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n1, n2;
  printf("\nDigite um numero inteiro: ");
  scanf("%f", &n1);
  printf("\nDigite um numero inteiro: ");
  scanf("%f", &n2);
  if (n1 > n2)
    printf("\nO 1. numero e o maior");
  else
    printf("\nO 2. numero e o maior");
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num;
  printf("Digite um número inteiro qualquer: ");
  scanf("%d", &num);
  if (num < 10)
  {
    printf("\n\nVoce digitou um numero menor que 10!");
  }
  else
  {
    printf("\n\nVoce digitou um numero maior ou igual a 10!");
  }
  return 0;
}
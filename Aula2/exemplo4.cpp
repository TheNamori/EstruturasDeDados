#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("\nDigite um numero inteiro: ");
  scanf("%d", &n);
  if (n >= 0)
  {
    if (n % 2 == 0)
      printf("\nO numero %d e par", n);
    else
      printf("\nO numero %d e impar", n);
  }
  else
    printf("\nO numero nao e positivo");
}
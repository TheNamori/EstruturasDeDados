#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, fatorial = 0;
  printf("Digite um valor para calculo do fatorial: ");
  scanf("%d", &n);
  fatorial = n;
  for (int cont = n - 1; cont > 0; cont--)
    fatorial *= cont;
  printf("\nO fatorial de %d e: %d", n, fatorial);
  printf("\n");
}
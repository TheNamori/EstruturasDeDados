#include <stdio.h>
#include <stdlib.h>
int main()
{
  int qtdPos = 0, qtdNeg = 0, n;
  for (int cont = 0; cont < 10; cont++)
  {
    printf("\nDigite um valor: ");
    scanf("%d", &n);
    if (n >= 0)
      qtdPos++;
    else
      qtdNeg++;
  }
  printf("\nPositivos: %d\nNegativos: %d\n", qtdPos, qtdNeg);
  return 0;
}
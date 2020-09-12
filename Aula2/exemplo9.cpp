#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n = 0, n_maior = 0, cont = 0;
  while (cont < 5)
  {
    printf("Digite um valor: ");
    scanf("%d", &n);
    if (n > n_maior)
      n_maior = n;
    cont++;
  }
  printf("\nO maior valor lido foi: %d\n", n_maior);
}
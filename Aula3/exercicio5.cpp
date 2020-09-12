#include <stdio.h>
#include <stdlib.h>
void imprime(int[][3], int, int);
int main()
{
  int matriz[3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 3, 5}}, i, k;
  for (i = 0; i < 3; i++)
  {
    for (k = 0; k < 3; k++)
      imprime(matriz, i, k);
    printf("\n");
  }
  return 0;
}
void imprime(int matriz[][3], int i, int k)
{
  printf("%d ", matriz[i][k]);
}
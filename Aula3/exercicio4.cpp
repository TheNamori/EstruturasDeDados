#include <stdio.h>
#include <stdlib.h>
int main()
{
  int matriz[3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 3, 5}}, i, k;
  for (i = 0; i < 3; i++)
  {
    for (k = 0; k < 3; k++)
      printf("%d ", matriz[i][k]);
    printf("\n");
  }
  return 0;
}
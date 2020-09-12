/* Exemplo do uso do laço for */
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  for (i = 0; i < 20; i++)
  {
    printf("%c", '*');
    if (i == 5)
      break;
  }
  printf("\n");
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a = 0, b = 1, c;
  printf("0-1-");
  for (int cont = 0; cont < 18; cont++)
  {
    c = a + b;
    printf("%d-", c);
    a = b;
    b = c;
  }
  printf("\n");
}
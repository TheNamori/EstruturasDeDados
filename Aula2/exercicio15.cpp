#include <stdio.h>
#include <stdlib.h>
#define PRN(n) printf("%.2f\n", (float)n)
int main()
{
  int n1, n2;
  n1 = 1416;
  n2 = n1 / 2;
  PRN(n1);
  PRN(n2);
  return 0;
}
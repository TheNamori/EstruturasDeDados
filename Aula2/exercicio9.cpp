#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  char Ch;
  Ch = '\0';
  while (Ch != 'u')
  {
    Ch = getch();
  }
  printf("A letra u foi pressionada. Fim de programa.");
  return 0;
}
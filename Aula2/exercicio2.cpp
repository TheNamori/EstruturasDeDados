/* Exemplo de if encadeado */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  char ch;
  printf("Digite uma letra de 'a' a 'z':");
  ch = getche();
  if (ch >= 'a')
    if (ch <= 'z')
      printf("\nVoce digitou uma letra minuscula.\n");
  return 0;
}
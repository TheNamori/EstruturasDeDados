#include <stdio.h>
#include <stdlib.h>
int main()
{
  float pa, sa, sn;
  char nome[50];
  printf("\nDigite nome do funcionario: ");
  scanf("%s", &nome);
  printf("\nDigite o salario atual do funcionario: ");
  scanf("%f", &sa);
  if (sa <= 400.0)
    pa = 15.0;
  else if (sa <= 700.0)
    pa = 12.0;
  else if (sa <= 700.0)
    pa = 12.0;
  else if (sa <= 1000.0)
    pa = 10.0;
  else if (sa <= 1800.0)
    pa = 7.0;
  else if (sa <= 2500.0)
    pa = 4.0;
  else
    pa = 0.0;
  sn = sa * (1.0 + pa / 100.0);
  printf("%s, p. aum. : %2.0f, s.a: %5.2f, s.n.: %5.2f.\n", nome, pa, sa, sn);
}
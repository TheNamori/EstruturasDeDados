/* Exemplo numero_ao_cubo.cpp */
/* Exemplo do uso de funções */
#include <stdio.h>
#include <stdlib.h>
int cubo(int n); /* Protótipo ou declaração da função */
int main()
{
  int n, a;
  printf("Digite um numero inteiro: ");
  scanf("%d", &n);
  a = cubo(n); /* Chamada à função */
  printf("O numero elevado ao cubo e %d.\n", a);
  return 0;
}
/* Definição da função */
int cubo(int n)
{
  int c;
  c = n * n * n;
  return c;
}
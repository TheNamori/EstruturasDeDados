#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
#define JOGOS 20
#define N 6
int main()
{
  srand(time(NULL));
  int matriz[JOGOS][N], k, j;
  for (k = 0; k < JOGOS; k++)
  { //fazer a rotina para os 20 jogos
    for (j = 0; j < N; j++)
    { //selecionar 6 numeros para cada jogo
      int teste;
      do
      {
        teste = rand() % 60 + 1; //gerar numero aleatório entre 1 e 60
        for (int i = 0; i < j; i++)
        { //verificar se o numero gerado já está no jogo (linha da matriz)
          if (teste == matriz[k][i])
          { //se estiver no jogo descarta o numero
            teste = 0;
            break;
          }
        }
      } while (teste == 0); //se o numero foi descartado realiza a rotina do aleatorio novamente
      matriz[k][j] = teste; //atribui o valor aleatorio ao jogo (matriz)
    }
  }
  for (k = 0; k < JOGOS; k++)
  { //exibição dos jogos
    printf("Combinacao %2d:    ", k + 1);
    for (j = 0; j < N; j++)
      printf("%2d   ", matriz[k][j]);
    printf("\n");
  }
  return 0;
}
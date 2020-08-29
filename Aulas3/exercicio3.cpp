#include <stdio.h>
#define colunas 3
#define linhas 2  
 
int main(void) {
  int A[linhas][colunas];
  int B[linhas][colunas];

  for(int i = 0; i < linhas; i++){
    printf("Digite o %d número da Matriz A: ", i);
    scanf("%d %d %d %d", &A[i][0], &A[i][1], &A[i][2];
  }

  for(int i = 0; i < linhas; i++){
    printf("Digite o %d número da Matriz B: ", i);
    scanf("%d %d %d %d", &B[i][0], &B[i][1], &B[i][2];
  }

  for (int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j ++){
      A[i][j] += B[i][j];
      printf("\t%d", A[i][j]);
    }
  }
}

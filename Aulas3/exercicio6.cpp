#include <stdio.h>
#include <stdlib.h>
#define colunas 3
#define linhas 3
 
int main(void) {
 int A[linhas][colunas];
 
 for(int i = 0; i < linhas; i++){
   printf("Digite o %d numero da Matriz:", i);
   scanf("%d %d %d", &A[i][0], &A[i][2], &A[i][2]);
 }
 
 int det;
 int detSoma = 0;
 int detSubt = 0;
 
 for(int i = 0, j = 0, k =4; i < linhas; i++, j--, k++){
   int l = 0;
   detSoma += A[l][j] * A[++l][++j] * A[++l][++j];
   l = 0;
   detSubt += A[l][k] * A[++l][--k] * A[++l][--k]
 }
   printf("%d", detSoma);
   printf("%d", detSubt);
   det = detSoma - detSubt;
   printf("%d", det);
 }

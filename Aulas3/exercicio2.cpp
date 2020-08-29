#include <stdio.h>
#define colunas 4
#define linhas 4
 
int main(void) {
 int A[linhasA][colunasA];
 
 for(int i = 0; i < linhas; i++){
   printf("Digite o %d número da Matriz: ", i);
   scanf("%d %d %d %d", &A[i][0], &A[i][1], &A[i][2], &A[i][3]);
 }
 
 for (int i = 0; i < linhas; i++){
   for(int j = 0; j < colunas; j ++){
     printf("\t%d", C[i][j]);
   }
   printf("\n");
 }
}

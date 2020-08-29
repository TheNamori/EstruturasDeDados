#include <stdio.h>
#define colunas 2
#define linhas 2
 
int main(void) {
 int A[linhas][colunas];
 
 for(int i = 0; i < linhas; i++){
   printf("Digite o %d numero da Matriz:", i);
   scanf("%d %d", &A[i][0], &A[i][1]);
 }
 
 int det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
 printf("O resultado é: %d", det);
}

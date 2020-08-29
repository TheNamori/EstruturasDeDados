#include <stdio.h>
#define colunasA 2
#define linhasA 3
#define colunasB 3
#define linhasB 2
 
int main(void) {
 int A[linhasA][colunasA];
 int B[linhasB][colunasB];
 int C[linhasA][colunasB];
 
 for(int i = 0; i < linhasB; i++){
   printf("Digite o %d número da Matriz A: ", i);
   scanf("%d %d", &A[i][0], &A[i][1]);
 }
 
   for(int i = 0; i < linhasA; i++){
   printf("Digite o %d número da Matriz B: ", i);
   scanf("%d %d", &A[i][0], &A[i][1]);
 }
 
 for (int i = 0; i < linhasA; i++){
   for(int j = 0; j < colunasB; j ++){
     int soma = 0;
     for(int k = 0; k < colunasA; k++){
       soma += A[i][k] * B[k][j];
     }
     C[i][j] = soma;
     printf("\t%d", C[i][j]);
   }
   printf("\n");
 }
}

#include <stdio.h>
#include <conio.h>
#define linhas 2
#define colunas 3
int main(){
    int A[linhas][colunas];
    int B[linhas][colunas];
    int C[linhas][colunas];

    for(int i=0; i<linhas; i++){
        printf("Matriz A: linha %d (separado por espaco): ", i+1);
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
    }

    for(int i=0; i<linhas; i++){
        printf("Matriz B: linha %d (separado por espaco): ", i+1);
        scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("\t%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

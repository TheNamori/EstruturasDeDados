#include <stdio.h>
#include <conio.h>
#define linhas 3
#define colunas 2
int main(){
    int A[linhas][colunas];
    int At[colunas][linhas];

    for(int i=0; i<linhas; i++){
        printf("Matriz A: linha %d (separado por espaco): ", i+1);
        scanf("%d %d", &A[i][0], &A[i][1]);
    }
    printf("\nMatriz transposta\n");
    for (int i = 0; i < colunas; i++){
        for (int j = 0; j < linhas; j++){
            At[i][j] = A[j][i];
            printf("%3d", At[i][j]);
        }
        printf("\n");
    }
    return 0;
}

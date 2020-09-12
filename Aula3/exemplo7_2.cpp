#include <stdio.h>
#include <conio.h>
#define linhas 3
#define colunas 3
#define colunasB 5

int main(){
    int A[linhas][colunas];
    int B[linhas][colunasB];

    for(int i=0; i<linhas; i++){
        printf("Matriz A: linha %d (separado por espaco): ", i+1);
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
        B[i][0]=A[i][0]; B[i][1]=A[i][1]; B[i][2]=A[i][2];
        B[i][3]=A[i][0]; B[i][4]=A[i][1];
    }

    int det;
    int detSoma=0;
    int detSubt=0;

    for(int i=0, j=0, k=4; i<colunas; i++, j--, k++){
        int l=0;
        detSoma+=B[l][j]*B[++l][++j]*B[++l][++j];
        l=0;
        detSubt+=B[l][k]*B[++l][--k]*B[++l][--k];
    }
    printf("\nDeterminante Soma: %d", detSoma);
    printf("\nDeterminante Subt: %d", detSubt);
    det = detSoma-detSubt;
    printf("\nDeterminante: %d", det);
	return 0;
}

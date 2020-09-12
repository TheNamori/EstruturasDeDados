#include <stdio.h>
#include <conio.h>
#define linhas 2
#define colunas 2

int main(){
    int A[linhas][colunas];

    for(int i=0; i<linhas; i++){
        printf("Matriz A: linha %d (separado por espaco): ", i+1);
        scanf("%d %d", &A[i][0], &A[i][1]);
    }
    int det=A[0][0]*A[1][1]-A[0][1]*A[1][0];
    printf("\nDeterminante: %d", det);
	return 0;
}

#include <stdio.h>
#include <conio.h>
#define linhas 3
#define colunas 3

int main(){
    int A[linhas][colunas];

    for(int i=0; i<linhas; i++){
        printf("Matriz A: linha %d (separado por espaco): ", i+1);
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
    }
    int det=
		(A[0][0] * A[1][1] * A[2][2]) +
		(A[0][1] * A[1][2] * A[2][0]) +
		(A[0][2] * A[1][0] * A[2][1]) -
		(A[0][1] * A[1][0] * A[2][2]) -
		(A[0][0] * A[1][2] * A[2][1]) -
		(A[0][2] * A[1][1] * A[2][0]) ;
    printf("\nDeterminante: %d", det);
	return 0;
}

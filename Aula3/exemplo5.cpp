#include <stdio.h>
#include <conio.h>
#define linhasA 2
#define colunasA 2
#define linhasB 2
#define colunasB 3

int main(){
    int A[linhasA][colunasA];
    int B[linhasB][colunasB];
    int C[linhasA][colunasB];

    for(int i=0; i<linhasA; i++){
        printf("Matriz A: linha %d (separado por espaco): ", i+1);
        scanf("%d %d", &A[i][0], &A[i][1]);
    }

    for(int i=0; i<linhasB; i++){
        printf("Matriz B: linha %d (separado por espaco): ", i+1);
        scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);
    }

    for (int i=0; i<linhasA; i++){
        for (int j=0; j<colunasB; j++){
            int soma = 0;
			for(int k=0; k<colunasA; k++){
				soma+=A[i][k]*B[k][j];
			}
			C[i][j]=soma;
			printf("\t%d", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}

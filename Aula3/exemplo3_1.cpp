#include <stdio.h>
#include <conio.h>

int main(){
    int A[2][3]={{0,1,2},{4,0,1}};
    int B[2][3]={{4,2,3},{3,5,9}};
    int C[2][3];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("\t%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

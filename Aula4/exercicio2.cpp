#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(){
    int troca;
    int X[N]={5, 2, 1, 4, 0};
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            if(X[j]<X[j+1]){
                troca = X[j];
                X[j]=X[j+1];
                X[j+1]=troca;
            }
            for(int i=0; i<N; i++){
                printf("%d\t", X[i]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    for(int i=0; i<N; i++){
        printf("%d\t", X[i]);
    }
    return 0;
}

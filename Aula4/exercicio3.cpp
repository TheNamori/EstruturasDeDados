#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(){
    char troca;
    char nomes[10][10]={"Abraao","David","Deivid","Day","Zeus","Thor","Dayane","Jonas","Joanne", "JoaoPaulo"};

    //crescente
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            if(nomes[j][0]>=nomes[j+1][0]){
                for(int k=0;k<10;k++){ //verificação dos elementos do vetor
                    if(nomes[j][k]>nomes[j+1][k]){ //verifica cada uma das letras
                        for(int x=0; x<10; x++){
                            troca = nomes[j][x];
                            nomes[j][x]=nomes[j+1][x];
                            nomes[j+1][x]=troca;
                        }
                        break;
                    }else if (nomes[j][k]<nomes[j+1][k]) break;
                }
            }
        }
    }
    for(int k=0; k<N; k++){
        for(int l=0; l<10; l++){
            printf("%c", nomes[k][l]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    //crescente
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            if(nomes[j][0]<=nomes[j+1][0]){
                for(int k=0;k<10;k++){ //verificação dos elementos do vetor
                    if(nomes[j][k]<nomes[j+1][k]){ //verifica cada uma das letras
                        for(int x=0; x<10; x++){
                            troca = nomes[j][x];
                            nomes[j][x]=nomes[j+1][x];
                            nomes[j+1][x]=troca;
                        }
                        break;
                    }else if (nomes[j][k]>nomes[j+1][k]) break;
                }
            }
        }
    }
    for(int k=0; k<N; k++){
        for(int l=0; l<10; l++){
            printf("%c", nomes[k][l]);
        }
        printf("\n");
    }




    return 0;
}

#include <stdio.h>
#include <math.h>
#include <conio.h>

float numeros[10], desvio[10];

int main(){
float media=0.0, soma_desvio=0.0, variancia= 0.0, desvPad = 0.0;
    //ler os 10 números
    for(int i=0; i<10; i++){
        printf("\nDigite o %d numero: ", i+1);
        scanf("%f", &numeros[i]);
        fflush(stdin);
        media += numeros[i];
    }
    media /= 10.0;
    for(int i=0; i<10; i++){
        desvio[i] = numeros[i]-media;
        soma_desvio += pow(desvio[i], 2);
    }
    variancia = 1.0/(10.0-1.0)*soma_desvio;
    desvPad = sqrt(variancia);
    printf("\nMedia: %.2f\n", media);
    printf("Desvio: %.2f\n", soma_desvio);
    printf("Variancia: %.2f\n", variancia);
    printf("Desvio Padrao: %.2f\n", desvPad);
}

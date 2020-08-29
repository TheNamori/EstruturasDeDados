#include <stdio.h>
#include <stdlib.h>

float media=0, idadeAlta=0, idadeBaixa=0, alturaAlta=0, alturaBaixa=0;
for(int i=0; i < 10; i++){
  printf("\nIdade da pessoa e a altura: ");
  scanf("%f %f", &dados[i][0], &dados[i][1]);
  fflush(stdin);
  media += dados[i][1];
  if(dados[i][1] < alturaBaixa){
    idadeBaixa = dados[i][0];
    alturaBaixa = dados[i][1];
  }
  if(dados[i][1] < alturaAlta){
    idadeAlta = dados[i][0];
    alturaAlta = dados[i][1];
  }
  media /= 10;
  printf("\nIdade da pessoa mais alta: %.0f", idadeAlta);
  printf("\nIdade da pessoa mais baixa: %.0f", idadeBaixa);
  printf("\nMedia das altura: %.2f", media);
}




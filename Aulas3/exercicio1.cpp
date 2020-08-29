#include <stdio.h>
#include <math.h>
 
float numeros[10], desvio[10];
 
 
void receiveNumbers();
float sumMedia();
 
 
int main(void) {
 receiveNumbers();
 sumMedia();
 
};
 
void receiveNumbers(){
 for(int i = 0; i < 10; i++){
   printf("Digite o %d número: ", i);
   scanf("%f", &numeros[i]);
   fflush(stdin);
 }
};
 
float sumMedia(){
 float media = 0.0;
 for(int i = 0; i < 10; i++){
   media += numeros[i];
 }
 return media;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
  int N[3];
  
  printf("Digite 3 número separados por espaço: ");
  scanf("%d %d %d", &N[0], &N[1], &N[2]);

  if (N[0]<=N[1] && N[0]<=N[2] && N[1]<=N[2])
    printf("Valores em ordem: %d, %d, %d", N[2], N[1], N[0]);
  else if (N[0]<=N[1] && N[0]<=N[2] && N[2]<N[1])
    printf("Valores em ordem: %d, %d, %d", N[1], N[2], N[0]);
  else if (N[1]<=N[0] && N[1]<=N[2] && N[0]<=N[2])
    printf("Valores em ordem: %d, %d, %d", N[2], N[0], N[1]);
  else if (N[1]<=N[0] && N[1]<=N[2] && N[2]<N[0])
    printf("Valores em ordem: %d, %d, %d", N[0], N[2], N[1]);
  else if (N[2]<=N[0] && N[2]<=N[1] && N[0]<=N[1])
    printf("Valores em ordem: %d, %d, %d", N[1], N[0], N[2]);
  else if (N[2]<=N[0] && N[2]<=N[1] && N[1]<N[0])
    printf("Valores em ordem: %d, %d, %d", N[0], N[1], N[2]);
  return 0;
}
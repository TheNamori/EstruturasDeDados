#include <stdio.h>
#include <stdlib.h>

int main(){
  int A, B, C, D;
  
  printf("Digite 4 número separados por espaço: ");
  scanf("%d %d %d %d", &A, &B, &C, &D);

  if(A <= B && A <= C && A <= D && B <= C && B <= D && C <= D)
    printf("Valores em ordem: %d, %d, %d, %d", A, B, C, D);
  else if(A <= B && A <= C && A <= D && B <= C && B <= D && D <= C)
    printf("Valores em ordem: %d, %d, %d, %d", A, B, D, C);
  else if(A <= B && A <= C && A <= D && C <= B && C <= D && B <= D)
    printf("Valores em ordem: %d, %d, %d, %d", A, C, B, D);
  else if(A <= B && A <= C && A <= D && C <= B && C <= D && D <= B)
    printf("Valores em ordem: %d, %d, %d, %d", A, C, D, B);
  else if(A <= B && A <= C && A <= D && D <= B && D <= C && B <= C)
    printf("Valores em ordem: %d, %d, %d, %d", A, D, B, C);
  else if(A <= B && A <= C && A <= D && D <= B && D <= C && C <= B)
    printf("Valores em ordem: %d, %d, %d, %d", A, D, C, B);

  else if(B <= A && B <= C && B <= D && A <= C && A <= D && C <= D)
    printf("Valores em ordem: %d, %d, %d, %d", B, A, C, D);
  else if(B <= A && B <= C && B <= D && A <= C && A <= D && D <= C)
    printf("Valores em ordem: %d, %d, %d, %d", B, A, D, C);
  else if(B <= A && B <= C && B <= D && C <= A && C <= D && A <= D)
    printf("Valores em ordem: %d, %d, %d, %d", B, C, A, D);
  else if(B <= A && B <= C && B <= D && C <= A && C <= D && D <= A)
    printf("Valores em ordem: %d, %d, %d, %d", B, C, D, A);
  else if(B <= A && B <= C && B <= D && D <= A && D <= C && A <= C)
    printf("Valores em ordem: %d, %d, %d, %d", B, D, A, C);
  else if(B <= A && B <= C && B <= D && D <= A && D <= C && C <= A)
    printf("Valores em ordem: %d, %d, %d, %d", B, D, C, A);

  else if(C <= B && C <= A && C <= D && B <= A && B <= D && A <= D)
    printf("Valores em ordem: %d, %d, %d, %d", C, B, A, D);
  else if(C <= B && C <= A && C <= D && B <= A && B <= D && D <= A)
    printf("Valores em ordem: %d, %d, %d, %d", C, B, D, A);
  else if(C <= B && C <= A && C <= D && A <= B && A <= D && B <= D)
    printf("Valores em ordem: %d, %d, %d, %d", C, A, B, D);
  else if(C <= B && C <= A && C <= D && A <= B && A <= D && D <= B)
    printf("Valores em ordem: %d, %d, %d, %d", C, A, D, B);
  else if(C <= B && C <= A && C <= D && D <= B && D <= A && B <= A)
    printf("Valores em ordem: %d, %d, %d, %d", C, D, B, A);
  else if(C <= B && C <= A && C <= D && D <= B && D <= A && A <= B)
    printf("Valores em ordem: %d, %d, %d, %d", C, D, A, B);

  else if(D <= B && D <= C && D <= A && B <= C && B <= A && C <= A)
    printf("Valores em ordem: %d, %d, %d, %d", D, B, C, A);
  else if(D <= B && D <= C && D <= A && B <= C && B <= A && A <= C)
    printf("Valores em ordem: %d, %d, %d, %d", D, B, A, C);
  else if(D <= B && D <= C && D <= A && C <= B && C <= A && B <= A)
    printf("Valores em ordem: %d, %d, %d, %d", D, C, B, A);
  else if(D <= B && D <= C && D <= A && C <= B && C <= A && A <= B)
    printf("Valores em ordem: %d, %d, %d, %d", D, C, A, B);
  else if(D <= B && D <= C && D <= A && A <= B && A <= C && B <= C)
    printf("Valores em ordem: %d, %d, %d, %d", D, A, B, C);
  else if(D <= B && D <= C && D <= A && A <= B && A <= C && A <= B)
    printf("Valores em ordem: %d, %d, %d, %d", D, A, C, B);
}

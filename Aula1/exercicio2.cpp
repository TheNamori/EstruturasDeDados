#include <stdio.h>
#include <stdlib.h>
int main()
{
  float CP, LP, PP, LA, AA, AT, AAZ, PL, PC, FP;
  int QA;
  printf("\nDigite os dados a seguir da piscina");
  printf("\nCompimento, Largura, Profundidade (cm): ");
  scanf("%f, %f, %f", &CP, &LP, &PP);
  fflush(stdin);
  printf("\nDigite os dados a seguir do azuleijo");
  printf("\nLargura, Altura (cm): ");
  scanf("%f, %f", &LA, &AA);
  fflush(stdin);
  PL = 2 * CP * PP;
  PC = 2 * LP * PP;
  FP = CP * LP;
  AT = PL + PC + FP;
  AAZ = LA * AA;
  QA = int((AT / AAZ) * 1.05);
  printf("A quantidade de azulejos para o revestimento da piscina e: %d", QA);
}
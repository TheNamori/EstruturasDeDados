#include <stdio.h>
#include <stdlib.h>
int main()
{
  float nota[5];
  int i;
  float media = 0.0;
  for (i = 0; i < 5; i++)
  {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &nota[i]);
    fflush(stdin);
    media += nota[i];
  }
  media /= 5.0;
  printf("Media das notas: %.2f\n", media);
  return 0;
}
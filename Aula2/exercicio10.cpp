/* Programa de adivinhação */
#include <stdio.h>
#include <stdlib.h> /* para system() e rand() */
#include <conio.h>  /* para getch() */
#include <time.h>   /* time */
int main()
{
  srand(time(NULL));
  char ch = 's'; /* s de sim */
  char resp;     /* resposta do usuário */
  char secreto;
  int tentativas;
  while (ch == 's')
  {
    secreto = rand() % 26 + 'a';
    tentativas = 1;
    printf("\n\nDigite uma letra entre 'a' e 'z':\n");
    while ((resp = getch()) != secreto)
    {
      printf("%c incorreto. Tente novamente\n", resp);
      tentativas++;
    }
    printf("%c CORRETO!!\n", resp);
    printf("Voce acertou em %d tentativas\n", tentativas);
    printf("\nQuer jogar novamente? (s/n): ");
    ch = getche();
  }
  printf("\nAte logo e boa sorte!\n");
  return 0;
}
/* Programa de adivinhação */
#include <stdio.h>
#include <stdlib.h> /* para system() e rand() */
#include <conio.h>  /* para getch() */
#include <time.h>   /* time */
int main()
{
  srand(time(NULL));
  char ch = '\0'; /* s de sim */
  char resp;      /* resposta do usuário */
  char secreto;
  int tentativas;
  do
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
  } while (ch == 's');
  printf("\nAte logo e boa sorte!\n");
  return 0;
}
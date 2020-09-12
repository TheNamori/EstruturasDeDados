#include <stdio.h>
#include <stdlib.h>
int main()
{
  float altura, peso, media_peso, soma_peso = 0, altura_maior = 0.0, porc_h, porc_m;
  int quant_h = 0, quant_m = 0, qtd_pessoas = 3;
  char sexo, nome[50], nome_maior[50];
  for (int cont = 0; cont < qtd_pessoas; cont++)
  {
    printf("\nEntre com o nome da pessoa: ");
    scanf("%s", &nome);
    fflush(stdin); //limpa o buffer do teclado
    printf("Entre com o sexo da pessoa (M ou F): ");
    scanf("%c", &sexo);
    fflush(stdin); //limpa o buffer do teclado
    printf("Entre com a altura da pessoa: ");
    scanf("%f", &altura);
    printf("Entre com o peso da pessoa: ");
    scanf("%f", &peso);
    if (altura > altura_maior)
    {
      altura_maior = altura;
      sprintf(nome_maior, "%s", nome);
    }
    soma_peso += peso;
    if (sexo == 'M')
      quant_h++;
    else
      quant_m++;
  }
  media_peso = soma_peso / float(qtd_pessoas);
  porc_m = float(quant_m) / float(qtd_pessoas) * 100.0;
  porc_h = float(quant_h) / float(qtd_pessoas) * 100.0;
  printf("\nA quantidade de mulheres e: %d - %.2f %%", quant_m, porc_m);
  printf("\nA quantidade de homens e  : %d - %.2f %%", quant_h, porc_h);
  printf("\nA media de peso das pessoas e: %.2f", media_peso);
  printf("\nO nome da pessoa mais alta e : %s", nome_maior);
  printf("\n");
  system("pause");
}
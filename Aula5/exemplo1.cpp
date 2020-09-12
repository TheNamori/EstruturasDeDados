#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#define N 10

typedef struct {// Cria uma STRUCT para armazenar os dados de uma pessoa
    char Nome[10];
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

Pessoa SetPessoa(char nome[10], int idade, float peso, float altura){
    Pessoa P;
    strncpy(P.Nome, nome, 10);
    P.Idade = idade;
    P.Peso = peso;
    P.Altura = altura;
    return P; // retorna a struct contendo os dados passados por parâmetro
}

void ImprimePessoa(Pessoa P){ // declara o parâmetro como uma struct
    printf("Nome: %-10s \tIdade: %3d \tPeso: %6.2f \tAltura: %.2f\n", P.Nome, P.Idade, P.Peso, P.Altura);
}

void ordenar(Pessoa *P, int tipo);

int main(){
    setlocale(LC_ALL, "");

    Pessoa alunos[10];

    alunos[0] = SetPessoa("David", 25, 83.2, 1.84);
    alunos[1] = SetPessoa("Deivid", 29, 73.1, 1.78);
    alunos[2] = SetPessoa("Day", 21, 56.8, 1.56);
    alunos[3] = SetPessoa("Zeus", 18, 53.3, 1.60);
    alunos[4] = SetPessoa("Thor", 25, 93.1, 2.07);
    alunos[5] = SetPessoa("Dayane", 27, 69.2, 1.55);
    alunos[6] = SetPessoa("Jonas", 15, 113.5, 1.97);
    alunos[7] = SetPessoa("Joanne", 35, 61.7, 1.69);
    alunos[8] = SetPessoa("JoaoPaulo", 28, 74.6, 1.63);
    alunos[9] = SetPessoa("Abraao", 23, 49.1, 1.49);

    printf("\nDados das pessoas:\n");
    for(int i=0; i<N; i++){
        ImprimePessoa(alunos[i]);
    }

    char op='\0';
    do{
        printf("\nDigite a opção desejada:");
        printf("\n1 - Ordenação pelo nome crescente");
        printf("\n2 - Ordenação pelo nome decrescente");
        printf("\n3 - Ordenação pela idade crescente");
        printf("\n4 - Ordenação pela idade decrescente");
        printf("\n5 - Ordenação pelo peso crescente");
        printf("\n6 - Ordenação pelo peso decrescente");
        printf("\n7 - Ordenação pela altura crescente");
        printf("\n8 - Ordenação pela altura decrescente");
        printf("\n0 - Sair\n");
        op = getche();
        system("cls");
        if (op >='1' && op <= '8'){
            if      (op=='1') printf("\nOrdenação pelo nome crescente\n");
            else if (op=='2') printf("\nOrdenação pelo nome decrescente\n");
            else if (op=='3') printf("\nOrdenação pela idade crescente\n");
            else if (op=='4') printf("\nOrdenação pela idade decrescente\n");
            else if (op=='5') printf("\nOrdenação pelo peso crescente\n");
            else if (op=='6') printf("\nOrdenação pelo peso decrescente\n");
            else if (op=='7') printf("\nOrdenação pela altura crescente\n");
            else if (op=='8') printf("\nOrdenação pela altura decrescente\n");
            ordenar(alunos, int(op - '0'));
        }
    } while(op!='0');
    return 0;
}

void ordenar(Pessoa P[10], int tipo){
    Pessoa troca;

    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            int trocar = 0;
            if (tipo==1){
                if(P[j].Nome[0] >= P[j+1].Nome[0]){
                    for(int k=0;k<10;k++){ //verificação dos elementos do vetor
                        if(P[j].Nome[k]>P[j+1].Nome[k]){ //verifica cada uma das letras
                            trocar = 1;
                            break;
                        }else if (P[j].Nome[k]<P[j+1].Nome[k]) break;
                    }
                }
            }
            else if (tipo==2){
                if(P[j].Nome[0] <= P[j+1].Nome[0]){
                    for(int k=0;k<10;k++){ //verificação dos elementos do vetor
                        if(P[j].Nome[k] < P[j+1].Nome[k]){ //verifica cada uma das letras
                            trocar = 1;
                            break;
                        }else if (P[j].Nome[k] > P[j+1].Nome[k]) break;
                    }
                }
            }
            else if (tipo==3){ if(P[j].Idade  > P[j+1].Idade)  trocar = 1;}
            else if (tipo==4){ if(P[j].Idade  < P[j+1].Idade)  trocar = 1;}
            else if (tipo==5){ if(P[j].Peso   > P[j+1].Peso)   trocar = 1;}
            else if (tipo==6){ if(P[j].Peso   < P[j+1].Peso)   trocar = 1;}
            else if (tipo==7){ if(P[j].Altura > P[j+1].Altura) trocar = 1;}
            else if (tipo==8){ if(P[j].Altura < P[j+1].Altura) trocar = 1;}
            if(trocar==1){
                troca = P[j];
                P[j] = P[j+1];
                P[j+1] = troca;
            }
        }
    }
    for(int i=0; i<N; i++){
        ImprimePessoa(P[i]);
    }
}

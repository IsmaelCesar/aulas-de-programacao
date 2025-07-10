#include <stdio.h>

// vetores de structs em funções
typedef struct {
    float peso_maximo;
    int qtd_itens;
} Mochila;

typedef struct {
    char nome[100];//string
    int idade;
    float notas[3];
    Mochila m;
} Aluno;

int main(){

    Aluno a;

    a.m.qtd_itens = 70;

    scanf("%f", &a.m.peso_maximo);

    return 0;
}
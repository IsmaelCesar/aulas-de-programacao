#include <stdio.h>
#include <string.h>

typedef struct aluno {
    char nome[50];
    int matricula;
    float nota_1, nota_2, nota_3;
} aluno;

aluno init_aluno(char nome[50], int matricula, float nota_1, float nota_2, float nota_3){
    aluno a;
    strcpy(a.nome, nome);
    a.matricula = matricula; 
    a.nota_1 = nota_1;
    a.nota_2 = nota_2;
    a.nota_3 = nota_3;
    return a;
}

float media_aluno(aluno a){
    a.nota_1 = 0;
    a.nota_2 = 0;
    a.nota_3 = 0;
    return (a.nota_1 + a.nota_2 + a.nota_3) / 3;
}

float media_classe(aluno a[3]){
    float soma = 0;
    for(int i = 0; i < 3; i++){
        a[i].nota_1 = 0;
        a[i].nota_2 = 0;
        a[i].nota_3 = 0;
    }

    return soma / 3;
}

int main(){
    aluno b[3] = {
      [2] = {.nome = "Fulano de Tal", .matricula = 123, .nota_1 = 10., .nota_2 = 10., .nota_3 = 10.},
      [0] = {.nome = "Ciclano de coisa", .matricula = 321, .nota_1 = 9., .nota_2 = 9., .nota_3 = 9.},
      [1] = {.nome = "Beltrano de Bensa", .matricula = 313, .nota_1 = 8., .nota_2 = 8., .nota_3 = 8.},
    };

    media_classe(b);

    for(int i = 0; i < 3; i++){
        printf("Nota aluno %s: nota 1: %.2f, nota 2: %.2f, nota 3: %.2f\n", b[i].nome, b[i].nota_1, b[i].nota_2, b[i].nota_3);
    }

    // printf("%f", media_aluno(b));
    // printf("Notas: %f %f %f", b.nota_1, b.nota_2, b.nota_3);
    return 0;
}

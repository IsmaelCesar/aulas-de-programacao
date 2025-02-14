#include <stdio.h>

// vetores de structs em funções
typedef struct {
    char nome[100];//string
    int idade;
    float notas[3];
} Aluno;

// função para zerar a idade da turma
void zerar_idade(Aluno t[2]){
    t[0].idade = 0;
    t[1].idade = 0;
}

int main(){

    Aluno turma[2] = {
        {
            .idade = 35000000,
            .nome = "Fran da Silva Sauro",
            .notas = {10, 10, 10}
        },
        {
            .notas = {10, 10, 10},
            .nome = "Bob da Silva Sauro",
            .idade = 18000000,
        }
    };

    printf("Idades antigas:\n ");
    printf("turma[0].idade: %d\n", turma[0].idade);
    printf("turma[1].idade: %d\n", turma[1].idade);

    zerar_idade(turma);

    printf("Idades alteradas:\n ");
    printf("turma[0].idade: %d\n", turma[0].idade);
    printf("turma[1].idade: %d\n", turma[1].idade);

    // fazer com que o usuário
    // cadastre todos os alunos da turma
    // for(int i = 0; i < 2; i++){
    //     printf("Cadastre os dados turma[%d]\n", i);
    //     printf("turma[%d].nome: ", i);
    //     fgets(turma[i].nome, 100, stdin);
    //     printf("turma[%d].idade: ", i);
    //     scanf("%d", &turma[i].idade);
    //     printf("turma[%d].notas[0]: ", i);
    //     scanf("%f", &turma[i].notas[0]);
    //     printf("turma[%d].notas[1]: ", i);
    //     scanf("%f", &turma[i].notas[1]);
    //     printf("turma[%d].notas[2]: ", i);
    //     scanf("%f", &turma[i].notas[2]);
    // }

    return 0;
}
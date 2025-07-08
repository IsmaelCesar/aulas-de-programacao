#include <stdio.h>

// vetores de structs
typedef struct {
    char nome[100];//string
    int idade;
    float notas[3];
} Aluno;


int main(){
    Aluno b = {
        "Dino da Silva Sauro",
        13,
        {10, 13, 44}
    };
    
    Aluno c = {
        .idade = 12,
        .notas = {10, 10, 10},
        .nome = "Bob da Silva Sauro" 
    };
    
    
    Aluno a;
    a.nome[0] = 'A';
    a.notas[0] = 1.1;
    a.notas[1] = 2.2;
    a.notas[2] = 3.3;
    
    float media = (c.notas[0] + c.notas[1] + c.notas[2])/3;

    // printf("c.nome: %s\n", c.nome);
    // printf("c.idade: %d\n", c.idade);
    // printf("c.notas: %.2f, %.2f, %.2f", c.notas[0], c.notas[1], c.notas[2]);

    Aluno d;
    printf("Digite os dados de aluno: \n");
    printf("d.nome: ");
    fgets(d.nome, 100, stdin);

    printf("d.idade: ");
    scanf("%d", &d.idade);

    for(int j = 0; j < 3; j++){
        printf("d.notas[%d]: ", j);
        scanf("%f", &d.notas[j]);
    }

    printf("\n\nValores salvos:\n");
    printf("d.nome: %s\n", d.nome);
    printf("d.idade: %d\n", d.idade);
    printf("d.notas: %.2f, %.2f, %.2f", d.notas[0], d.notas[1], d.notas[2]);

    return 0;
}
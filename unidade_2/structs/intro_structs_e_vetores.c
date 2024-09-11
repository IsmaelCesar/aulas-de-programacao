#include <stdio.h>

typedef struct aluno {
    char nome[50];
    int matricula;
    float nota_1, nota_2, nota_3;
} aluno;

int main(){
    // Aluno: nome: string[50], matricula: int,
    //        nota_1: float, nota_2: float, nota_3; float

    aluno w[30][60];
    
    for(int i = 0; i < 30; i++){
        for (int j  = 0; j < 60; j++){
            printf("Digite a nota 1: ");
            scanf("%f", &w[i][j].nota_1);

            printf("Digite a nota 2: ");
            scanf("%f", &w[i][j].nota_2);

            printf("Digite a nota 3: ");
            scanf("%f", &w[i][j].nota_3);
        }        
    }

    return 0;
}
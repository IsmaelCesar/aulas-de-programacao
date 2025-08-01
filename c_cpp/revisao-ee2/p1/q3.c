#include <stdio.h>
typedef struct pessoa {
    char nome[50];
    float salario;
} Pessoa;

void aumento_percentual(Pessoa *p, float percentual){
    p->salario = p->salario + p->salario*percentual;
}
void busca_aumento(Pessoa pessoas[10], char primeira_letra){
    FILE *f = fopen("saida.txt", "w");
    for(int i=0 ; i < 10; i++){
        if(pessoas[i].nome[0] == primeira_letra){
            aumento_percentual(pessoas + i, 0.2);
            fprintf(f, "%s %.2f\n", pessoas[i].nome, pessoas[i].salario);
        }
    }
    fclose(f);
}

int main(){
    Pessoa pessoas[10]   = {
        [0] = { .nome = "Ana", .salario = 111.5 },
        [1] = { .nome = "Batriz", .salario = 123.4 },
        [2] = { .nome = "Carlos", .salario = 321.2 },
        [3] = { .nome = "Zorobabel", .salario = 222.3 },
        [4] = { .nome = "Bernardette", .salario = 444.7 },
        [5] = { .nome = "Leonardo", .salario = 567.1 },
        [6] = { .nome = "Sheldon", .salario = 231.2 },
        [7] = { .nome = "Benedito", .salario = 589.9 },
        [8] = { .nome = "Rafael", .salario = 959.2 },
        [9] = { .nome = "Donatelo", .salario = 82.7 },
    };


    busca_aumento(pessoas, 'B');
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// matrizes e strings

void funcao_vetor2(int v[10]){
    v[11] = 9;
}

void funcao_matriz(int m[][10]){

}

void imprime_linha(int v[3]){
    for(int i = 0; i < 3; i++){
        printf(" %d ", v[i]);
    }
}

int main(){

    int w2[12]; 
    w2[11] = -1;
    printf("Valor de w2[11]: %d\n", w2[11]);
    funcao_vetor2(w2);
    printf("Novo valor de w2[11]: %d\n", w2[11]);

    
    int tamanho = sizeof(w2)/sizeof(int);
    printf("Tamanho w2: %d\n", tamanho);

    double w3[100];

    tamanho = sizeof(w3)/sizeof(double);
    printf("Tamanho w3: %d", tamanho);

    int v1[10];

    int mat[3][3] = {
        {1, 2, 3},
        {3, 2, 1},
        {3, 1, 3}
    };

    imprime_linha(mat[0]);
    imprime_linha(mat[1]);
    
    // fazer com que o usuario inicialize mat2
    float mat2[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%f", &mat2[i][j]);
        }
    }

    char nomes[3][100] = {
        "Dino da Silva Sauro", // -> 0 (1 - 1)
        "Fran da Silva Sauro", // -> 1 (2 - 1)
        "Bob da Silva Sauro"   // -> 2 (3 - 1)
    };

    printf("Nome: %s", nomes[2]);

    return 0;
}
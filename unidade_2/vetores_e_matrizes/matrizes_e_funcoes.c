#include <stdio.h>

// matrizes e funcoes

// void inicializa_vetor(float v[3]){
//     for(int i = 0; i < 3 ; i++){
//         v[i] = 1.5;
//     }
// }

void imprime_vetor(int v[3]){
    for(int i = 0; i < 3 ; i++){
        printf(" %d ", v[i]);
    }
}

int main(){

    float mat[3][3];

    // printf("Valor antigo mat[1]:");
    // imprime_vetor(mat[1]);
    // printf("\n");
    
    // inicializa_vetor(mat[1]);
    
    // printf("\n");
    // printf("Valor novo mat[1]:");
    // imprime_vetor(mat[1]);

    int v[3] = {3, 4, 5};

    int v2[3][3] = {
        {3, 4, 5},
        {3, 1, 2},
        {5, 5, 5}
    };

    imprime_vetor(v2[2]);

    return 0;
}
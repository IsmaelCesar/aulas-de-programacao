#include <stdio.h>

// matrizes
void funcao_vetor2(int v[10]){
    v[11] = 19;
}

void funcao_vetor3(int v[]){
    v[11] = 22;
}

void funcao_vetor4(int v[], int tamanho){
    v[tamanho - 1] = 44;
}

int main(){

    int w[12];
    w[11] = 2;
    printf("Valor antigo de w[11]: %d\n", w[11]);
    funcao_vetor4(w, 12);
    printf("Valor novo de w[11]: %d", w[11]);

    double w2[1000];
    int n_componentes = sizeof(w2) / sizeof(double);

    printf("Quantidade de elementos w2: %d", n_componentes);

    int v1[3] = { 2, 3, 4};
    float v2[4] = {2.2, 4.4, 45.6};
    char s[3] = {'a', 'b', 'c'};
    char s2[3] = "abc";

    float m[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 3; j++){
            if(i == j){
                m[i][j] = 1.0;
            }
            else{
                m[i][j] = 0.0;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 3; j++){
            printf(" %.2f", m[i][j]);
        }
        printf("\n");
    }

    return 0; 
}
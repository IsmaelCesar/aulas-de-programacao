#include <stdio.h>
#include <stdlib.h>

// matrizes e strings

void funcao_vetor(int v[]){
    v[11] = 9;
}

void funcao_vetor2(int v[], int tamanho){
    v[tamanho - 1] = 9;
}

// void imprime_tamanho(int v[]){
//     int tamanho = sizeof(v)/sizeof(int);
//     printf("Tamanho v: %d", tamanho);
// }

void funcao_matriz(int mat[][3]){

}


int main(){

    // int w2[12]; 
    // w2[11] = -1;
    // printf("Valor de w2[11]: %d\n", w2[11]);
    // funcao_vetor2(w2, 12);
    // printf("Novo valor de w2[11]: %d\n", w2[11]);

    // imprime_tamanho(w2);
    // int tamanho = sizeof(w2)/sizeof(int);
    // printf("Tamanho w2: %d\n", tamanho);

    // double w3[100];

    // tamanho = sizeof(w3)/sizeof(double);
    // printf("Tamanho w3: %d", tamanho);

    // int v1[10];
    //acessando o terceiro elemento
    // v1[2] = -3;

    // int t = 10;
    // float w[t];

    // int i  = 2;// 3 - 1;
    // w[i] = 1.1;

    // for(int k = 0; k < t; k++){
    //     w[k] = 2.2;
    // }

    int w4[3];
    float mat[3][3];

    printf("Digite o valor de w4[2]:");
    scanf("%d", &w4[2]);

    printf("Digite o valor de mat[2][2]:");
    scanf("%f", &mat[2][2]);

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         if(i == j){
    //             mat[i][j] = 1;
    //         }
    //         else{
    //             mat[i][j] = 0;
    //         }
    //     }
    // }

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf(" %.2f ", mat[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
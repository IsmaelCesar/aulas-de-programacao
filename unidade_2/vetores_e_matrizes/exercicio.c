#include <stdio.h>

void imprime_vetor(int vet[3]){
    for(int i =0 ; i < 3; i++){
        printf(" %d ", vet[i]);
    }
}

void imprime_matrix(int mat[4][3]){
    for(int i = 0 ; i < 4; i++){
        imprime_vetor(mat[i]);
        printf("\n");
    }
}

float f(float v[]){

}

int main(){

    float vet_1[]  = {1.1, 2.2, 3.3, 3.3};
    float vet_2[]  = {3.4, 5.5, 65.4, 88.9};
    int tamanho = sizeof(vet_1) / sizeof(float);
    
    printf("%.2f", vet_1[0]);

    // a -> 1; b -> 2; c -> 6
    // int a[3] = {1, 1, 1};
    // int b[3] = {2, 2, 2};
    // int c[3] = {6, 6, 6};

    // int matriz[4][3];
    // for(int k = 0; k < 3; k++){
    //     matriz[3][k] = 0;
    // }

    // for(int i = 0; i < 4; i++){ // i = 1
    //     for(int j = 0; j < 3 ; j++){// j = 0
    //         if(i == 3){
    //             //matriz[i][j] = a[j] + b[j] + c[j];
    //             matriz[i][j] = matriz[0][j] + matriz[1][j] + matriz[2][j];
    //         }
    //         else if(i == 0){
    //             matriz[i][j] = a[j];
    //         }
    //         else if(i == 1){
    //             matriz[i][j] = b[j];
    //         }
    //         else if(i == 2){
    //             matriz[i][j] = c[j];
    //         }
    //     }
    // }


    // imprime_matrix(matriz);    

    return 0;
}
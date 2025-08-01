#include <stdio.h>
void imprime_vetor(int vetor[3]){
    for(int i = 0 ; i < 3; i++){
        printf("%d ", vetor[i]);
    }
}

int main(){

    int vetor_3d[3] = {__, __, __};
    int vetor_2d[2] = {4, 2};


    int soma_mod2[3] = {0, 0, 0};
    for(int i = 0; i < 3; i++){
        int soma = vetor_3d[i];
        for(int j = 0; j < 2 ; j++){
            soma += vetor_2d[j];
        }
        soma_mod2[i] = soma % 2;
    }

    imprime_vetor(soma_mod2);
    return 0;
}

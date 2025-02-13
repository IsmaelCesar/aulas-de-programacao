#include <stdio.h>

int main(){

    int v1[10];
    // alterando a quarta posição
    v1[3] = 12;

    float v2[10];
    // inicializar a sexta posição
    // de v2 com valor 1.1
    v2[5] = 1.1;

    double v3[70];
    // inicializar a trigésima posição
    // de v3 com valor 3.75
    v3[29] = 3.75;

    // string
    char v4[10];
    // inicializar a última posição
    // de v4 com o caractere 'b'
    v4[9] = 'b';

    // criando um vetor reaproveitando valores
    // de variáveis (tem de ser do tipo int)
    int tamanho = 100;
    float w[tamanho]; // criação

    // atualizar a octagésima posição de w
    // com o valor 5.5
    int i = 79;// i não pode ser maior que 99 nem menor que 0
    w[i] = 5.5; // atualização/inicialização
   
    int tamanho_2 = 5;
    float w2[tamanho_2];
    // inicializar todos os componentes de w2 com o valor
    // 2.5. Como fazer?
    for(int j = 0 ; j < tamanho_2; j++){
        w2[j] = 2.5;
    }

    // Fazer com que o usuário inicialize todos elementos de w2
    // for(int j = 0 ; j < tamanho_2; j++){
    //     scanf("%f", &w2[j]);
    // }

    // printf("%f", w2); // -> não imprime o vetor inteiro

    for(int j = 0 ; j < tamanho_2; j++){
        printf(" %.1f ", w2[j]);//imprimindo o valor do j-ésimo componente
    }


}

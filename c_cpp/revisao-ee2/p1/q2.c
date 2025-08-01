#include <stdio.h>

void troca_e_soma_dez(float *x, float *y){
    float temporario = x;
    x = y + 10;
    y = temporario + 10;
}

int main(){


    float valor_1 = 5.0;
    float valor_2 = 5.0;

    printf("Valor 1: %.2f Valor 2: %.2f\n", valor_1, valor_2);

    troca_e_soma_dez(valor_1, valor_2);


    printf("Valor 1: %.2f Valor 2: %.2f\n", valor_1, valor_2);
    return 0;
}

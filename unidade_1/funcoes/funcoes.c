#include <stdio.h>

const int outro_valor = 700;

int nome_f(int v){
    return v+1;
}

int power(int num, int exp){
    int resultado = 1;
    for(int i = 0; i < exp; i++){
        resultado = resultado * num;
    }
    return resultado;
}

float f(float x, float y){
    return x;
}

float prod(float a, float b){
    return a * b;
}

void imprime_mensagem(int x){
    printf("\nO valor de x eh: %d\n", x);
    printf("Outro valor: %d", outro_valor);
    return;
}

int main(){
    /* float t = 50, j = 70;
    j = f(t, j);

    printf("t: %.2f j: %.2f \n", t, j);

    float resultado = prod(t, j);
    printf("t * j: %.2f\n", resultado);

    resultado = prod(2.0, 2.0);
    printf("2.0 * 2.0: %.2f", resultado);
    printf("3.0 * 3.0: %.2f", prod(3.0, 3.0)); */

    imprime_mensagem(50);

    return 0;
}

#include <stdio.h>
#include <math.h>

int soma_um(int v1);
float d_euclid(float xa, float ya, float xb, float yb);
void imprime_mensagem(float x);
float quadrado(float v1);

int main(){
    imprime_quadrados(11, 50);

    // float x = 10, resultado;
    // imprime_mensagem(50);
    // printf("Valor de x: %.2f\n", x);
    // printf("Valor antigo de x: %.2f\n", x);
    // resultado = quadrado(x);
    // printf("Valor novo de x: %.2f\n", x);
    // printf("Valor de resultado: %.2f", resultado);
    return 0;
}

int soma_um(int v1){
    v1++; // v1 = v1 + 1;
    return v1;
}

float d_euclid(float xa, float ya, float xb, float yb){
    float sum = pow(xa - xb, 2) + pow(ya - yb, 2);
    return sqrt(sum);
}

void imprime_mensagem(float x){
    printf("Valor de x: %.2f\n", x);
}

float quadrado(float v1){
    return v1*v1;
}
// imprima o quadrado dos números 
// entre m e n
void imprime_quadrados(int m, int n){
    for(int i = m; i <= n; i++){
        printf(" %.2f\n ", quadrado((float) i));
    }
}

#include <stdio.h>
#define PI 3.14
const int my_const = 1500;
float w = 5.6;
void imprime_constantes(){
    printf("PI: %.2f", PI);
    printf("\nmy_const: %d", my_const);
    printf("Valor de w: %.2f", w);
    w = 10;
}
void outros_valores(){
    printf("Mensagem 1\n");
    printf("Mensagem 2\n");
    printf("Valor de w: %.2f", w);
    w = 15;
}
int main(){
    outros_valores();
    imprime_constantes();
    printf("\nmy_const (main): %d", my_const);
    printf("\nValor de w (main): %.2f", w);
}


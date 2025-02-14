#include <stdio.h>
#include <string.h>

typedef struct {
    float x;
    float y;
} Ponto;

// Utilizando structs em funções
// criando uma função que soma dois pontos
Ponto soma_pontos(Ponto a, Ponto b){
    Ponto resultado;
    resultado.x = a.x + b.x;
    resultado.y = a.y + b.y;
    return resultado;
}


int main(){

    Ponto k, l, c;
    k.x = 1.1;
    k.y = 2.2;
    l.x = 1.1;
    l.y = 2.2;

    c = soma_pontos(k, l);

    printf("(c.x=%.2f, c.y=%.2f)\n", c.x, c.y);

    return 0;
}

#include <stdio.h>

// função que soma três inteiros
int soma_tres_numeros(int x, int y, int z){
    return x + y + z;
}

// implementar uma função que calcule a n-ésima potência de x;
int n_potencia(int x, int exp);

void imprime_mensagem();
void imprime_mensagem(){
    printf("Esta eh uma mensagem\n");
}

int main(){
    /*
    .....
    */
   int resultado = n_potencia(2, 10);
   printf("2^10: %d\n", resultado);
   
}

int n_potencia(int x, int exp){
    int resultado = 1; 
    for(int i = 0; i < exp; i++){
        resultado *= x; // resultado = resultado * x;
    }
    return resultado;
}

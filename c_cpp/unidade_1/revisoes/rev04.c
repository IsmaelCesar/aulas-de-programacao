// funções
#include <stdio.h>

/*
tipo nome_f(tipo nome_v1, tipo nome, ...){
    ...
    return resultado;
}
*/

// soma dois numeros inteiros e retorna o resultado
int soma_dois_numeros(int numero1, int numero2){
    return numero1 + numero2;
}

// retorne o quadrado do número
float quadrado(float numero2){
    return numero2 * numero2;
}

// retornar a soma dos quadrados de n a m
float soma_dos_quadrados(int n, int m){
    float resultado = 0.0;
  
    for(int i = n; i <= m; i++){ // i = i + 1
        resultado = resultado + quadrado(i);
    }

    return resultado;
}

void imprime_mensagem(){
    printf("\n\nEsta eh uma mensagem\n\n");
}

void imprime_mensagem2(int x, float y){
    printf("\n\nValor de x: %d\n", x);
    printf("Valor de y: %f\n\n", y);
}

// recursividade
// somatorio de n até 0
                 // 5
int somatorio_rec(int n){
    if(n == 0){
        return n;
    }

    return n + somatorio_rec(n - 1);
}
/*
1. n = 5
   5 + 4 + 3 + 2 + 1 + 0
*/

int main(){

    // int var1 = 10 , var2 = 11; 
    // int aux = soma_dois_numeros(var1, var2);
    // printf("Resultado: %d\n", aux);


    // printf("Quadrado: %f", quadrado(10));

    // float aux2 = soma_dos_quadrados(10, 100);
    // printf("Resultado soma dos quadrados: %f", aux);
    // printf("Resultado soma dos quadrados: %f", soma_dos_quadrados(10, 100));

    // imprime_mensagem();
    // imprime_mensagem2(3, 5.5);
}
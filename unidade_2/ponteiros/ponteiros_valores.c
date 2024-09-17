#include <stdio.h>

int main(){

    int valor = 10;
    int *ptr_v = &valor;

    printf("Endereco de memoria(ptr): %p\n", ptr_v);
    printf("Endereco de memoria(int): %d\n", ptr_v);
    printf("Endereco de memoria(int) valor: %p\n", &valor);

    // Acessando o valor salvo por um inteiro
    printf("Endereco de memoria(ptr): %d\n", *ptr_v);

    // // Alterando valor da variável original
    int v = 50; 
    int *ptr = &v;
    printf("Antigo valor de v: %d\n", v);
    printf("Ponteiro de v: %p\n", ptr);
    *ptr = 15;
    printf("Novo valor de v: %d\n", v);
    printf("Ponteiro de v: %p\n", ptr);
    printf("Valor apontado por ptr: %p\n", *ptr);

    *ptr = *ptr / 32;
    printf("Valor apontado por ptr: %d\n", *ptr);
    printf("Valor de v: %d\n", v);

    return 0;
}
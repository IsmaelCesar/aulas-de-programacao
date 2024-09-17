#include <stdio.h>

int main(){

    int valor = 10;
    int *ptr_v = &valor;

    printf("Endereco de memoria(ptr): %p\n", ptr_v);
    printf("Endereco de memoria(int): %d\n", ptr_v);

    // Acessando o valor salvo por um inteiro
    printf("Endereco de memoria(ptr): %d\n", *ptr_v);

    // Alterando valor da variável original
    int v = 50; 
    int *ptr = &v;
    printf("Antigo valor de v: %d\n", v);
    printf("Ponteiro de v: %p\n", ptr);
    *ptr = 15;
    printf("Novo valor de v: %d\n", v);
    printf("Ponteiro de v: %p\n", ptr);

    return 0;
}
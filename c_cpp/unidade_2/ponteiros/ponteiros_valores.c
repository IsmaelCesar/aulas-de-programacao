#include <stdio.h>


void soma_dois(int x){
    x = x + 2;
}

void soma_dois_ptr(int *ptr_x){
    *ptr_x = *ptr_x  + 2;
}

int main(){

    int k = 50;
    printf("Valor antigo de k: %d\n", k);
    int *ptr_k = &k;
    soma_dois_ptr(ptr_k);
    printf("Valor de k: %d\n", k);
    
    soma_dois(k);
    printf("Valor de k (soma_dois_ptr): %d\n", k);
    
    int valor = 10;
    int *ptr_v = &valor;
    printf("Endereco de memoria(ptr): %p\n", ptr_v);//hexadecimal
    printf("Endereco de memoria(ptr) valor: %p\n", &valor);

    // Acessando o valor salvo por um inteiro
    printf("Valor apontado por ptr_v(ptr): %d\n", *ptr_v);

    // // Alterando valor da variável original
    int v = 50; 
    int *ptr = &v;
    int *ptr_2 = &v; // evitar a qualquer custo -> SEMENTE DO MAL!!!!
    printf("Antigo valor de v: %d\n", v);
    printf("Ponteiro de v: %p\n", ptr);
    *ptr = 10;
    *ptr_2 = 70;
    printf("Novo valor de v: %d\n", v);
    
    

    printf("Ponteiro de v: %p\n", ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);

    *ptr = 15;
    printf("Valor antigo de v: %d\n", v);
    *ptr = *ptr / 3;// -> v = v / 3;
    printf("Valor apontado por ptr: %d\n", *ptr);
    printf("Valor de v: %d\n", v);

    

    return 0;
}
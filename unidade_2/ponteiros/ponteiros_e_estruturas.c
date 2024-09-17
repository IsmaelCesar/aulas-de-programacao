#include <stdio.h>

typedef struct carro { 
    char modelo[10];
    int ano; 
    double preco;
} carro;

int main(){
    carro c = { "kwid", 2024, 80000.00 };
    carro *ptr = &c;

    printf("Endereco ponteiro: %p\n", ptr);

    // acessando ponteiros da maneira tradicional
    printf("Modelo do carro: %s\n", ptr->modelo);
    // printf("Modelo do carro: %s\n", (*ptr).modelo);
    printf("Ano do carro: %d\n", ptr->ano);
    printf("Preco do carro: %.2lf\n", ptr->preco);

    ptr->preco = ptr->preco / 2;
    printf("Novo preco do carro: %.2lf\n", ptr->preco);

    return 0;
}
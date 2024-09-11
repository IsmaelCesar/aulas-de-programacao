#include <stdio.h>
#include <stdlib.h>

struct livro{
    char titulo[60];
    char autor[60];
    int ano_pub;
    float preco;
};


int main(){
    // Livro: titulo: string[60], autor[60], ano_pub: int, preco: float
    // Livro l1; // publicado em 1955, preco 60.00
    // Livro l2; // publicado em 1899, preco 79.99
    // Livro l3;

    // printf("Digite titulo livro 1: ");
    // fgets(l1.titulo, 60, stdin);
    // printf("Digite autor livro 1: ");
    // fgets(l1.autor, 60, stdin);

    // printf("Digite titulo livro 2: ");
    // fgets(l2.titulo, 60, stdin);
    // printf("Digite autor livro 2: ");
    // fgets(l2.autor, 60, stdin);

    // printf("Livro 1: \n Autor: %s, Titulo: %s\n", l1.autor, l1.titulo);
    // printf("Livro 2: \n Autor: %s, Titulo: %s\n", l2.autor, l2.titulo);

    int s = 150;

    struct livro livro_1 = { 
        "A volta dos que nao foram", 
        "Espada de Assis",
        1899,
        89.7 
    };

    printf("Livro 1: \n Autor: %s, Titulo: %s, preco: %f\n", livro_1.autor, livro_1.titulo, livro_1.preco);

    scanf("%d", &livro_1.ano_pub);

    struct livro livro_2 = {.ano_pub = 1955, 
                            .autor = "JRR Martin",
                            .preco = 60., 
                            .titulo = "O senhor do Gelo e Fogo"};
    
    printf("Livro 1: \n Autor: %s, Titulo: %s, preco: %f\n", livro_2.autor, livro_2.titulo, livro_2.preco);

    return 0;
}
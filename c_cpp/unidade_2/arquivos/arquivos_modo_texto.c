#include <stdio.h>
#include <stdlib.h>


void cria_arquivo(const char mensagem[]){
    FILE *f = fopen("modo_texto.txt", "w");
    fprintf(f, mensagem);
    fclose(f);
}

void adiciona_mensagem(const char nova_mensagem[]){
    FILE *f = fopen("modo_texto.txt", "a");
    fprintf(f, nova_mensagem);
    fclose(f);
}

void adiciona_mensagem_string(const char nova_mensagem[]){
    FILE *f = fopen("modo_texto.txt", "a");
    fputs(nova_mensagem, f);
    fclose(f);
}

void lendo_valores(){
    int v1;
    float v2; 
    char v3; 
    char v4[100];

    FILE *f = fopen("valores.k", "r");
    fscanf(f, "%d %f %c\n", &v1, &v2, &v3);
    fgets(v4, 100, f);
    printf("Valores lidos: %d %.2lf %c\n", v1, v2, v3);
    printf("String lida: %s", v4);
    fclose(f);
}

int main(){

    char mensagem[100] = "esta eh uma nova mensagem.";
    FILE *f = fopen("valores.k", "a");

    fputs(mensagem, f);

    fclose(f);
    

    // cria_arquivo("Isto é outra mensagem");

    // adicionando valores ao final do arquivo
    // adiciona_mensagem("Isto é uma nova mensagem");
    // adiciona_mensagem("\nIsto é uma nova mensagem com quebra de linha");
    // adiciona_mensagem_string("Esta é uma nova mensagem em uma string");

    // lendo valores
    // lendo_valores();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("meu_arquivo.txt", "w");
    // w - escrita ; r - leitura ; a - concatenação
    
    char nome[] = "Dino da Silva Sauro";
    int ano_nascimento = 65000890;
    fprintf(f, "Nome: %s, nascido em: %d A.C.", nome, ano_nascimento);

    fprintf(f, "\nO valor de 1+1 eh: %d\n", 1+1);

    fclose(f);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("meu_arquivo.txt", "w");
    
    char nome[] = "Dino da Silva Sauro";
    int tempo_nascimento = 65000890;
    fprintf(f, "Nome: %s, nascido em: %d A.C.", nome, tempo_nascimento);

    fclose(f);

    return 0;
}
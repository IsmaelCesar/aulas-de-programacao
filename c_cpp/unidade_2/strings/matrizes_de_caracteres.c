#include <stdio.h>
#include <string.h>

int main(){

    float nome_mat[3][3];

    char nome_pessoas[3][100] = { 
        "Pessoa 1", 
        "Pessoa 2",
        "Pessoa 3"
    };

    for(int i = 0; i < 3; i++){
        printf("%s\n", nome_pessoas[i]);
    }

    strcat(nome_pessoas[0], nome_pessoas[1]);

    for(int i = 0; i < 3; i++){
        printf("%s\n", nome_pessoas[i]);
    }

    fgets(nome_pessoas[2], 100, stdin);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){

    char nomes[3][100] = {
        "Dino da Silva Sauro",
        "Fran da Silva Sauro",
        "Bob da Silva Sauro"
    }; 

    printf("Nome: %s", nomes[2]);

    return 0;
}
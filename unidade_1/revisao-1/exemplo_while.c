#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao = 1;

    for(;opcao != 0;){ // while(opcao != 0)
        printf("Digite 0 pra sair: ");
        scanf("%d", &opcao);
    }

    return 0;
}
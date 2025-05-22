#include <stdio.h>

int main(){

    int valor = -1;// variável de controle
    while (1){ // condição 0 -> FALSO, 1 -> VERDADEIRO
        printf("Digite -1 pra sair: ");
        scanf("%d", &valor); // atualização
        if(valor == -1){
            break;
        }
    }

    int valor2 = 0;
    do{
        printf("Digite 0 pra sair: ");
        scanf("%d", &valor2);
    }while(valor2 != 0);
    

    return 0;
}
#include <stdio.h>

int main(){
    int valor; 

    do{
        printf("Digite um valor entre 1000 e 10000: ");
        scanf("%d", &valor);

        if(valor < 1000 || valor > 10000){
            printf("Não! Estude mais.\n");
        }
    }while(valor < 1000 || valor > 10000);
    
    printf("Muito bem!\n");

    return 0;
}
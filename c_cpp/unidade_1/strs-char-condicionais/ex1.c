#include <stdio.h>

int main(){
    int valor; 
    printf("Digite um inteiro: ");
    scanf("%d", &valor);

    if(valor % 2 == 0){
        printf("O numero eh par");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int numero = -1;
    int soma = 0;
    while (numero < 0){
        printf("Digite um numero maior que zero:");
        scanf("%d", &numero);

        if(numero > 0){
            for(int i = 1; i <= numero; i++){
                soma += i;
            }
        }
    }

    printf("Soma: %d", soma);

    
    return 0;
}
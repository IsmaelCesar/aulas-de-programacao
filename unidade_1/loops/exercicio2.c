#include <stdio.h>

int main(){
    int numero;
 
    printf("Digite um numero: ");
    scanf("%d", &numero); // numero = 3;

    int fat = 1;
    for(int i = numero; i > 0; i--){
        fat = fat * i;
    }

    printf("\nFatorial de %d: %d\n", numero, fat);
    return 0;
}
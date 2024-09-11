#include <stdio.h>

int main(){
    int soma;
    int numeros[3];
    numeros[0] = 3;
    numeros[1] = 7;
    numeros[2] = 2;

    for(int i = 0; i < 3; i++){
        soma += numeros[i];
    }

    printf("%d\n", soma);
    return 0;
}

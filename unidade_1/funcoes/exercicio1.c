#include <stdio.h>

int meu_scan(int x, int y){
    int w ;
    do{
        printf("Digite um valor entre %d e %d:", x, y);
        scanf("%d", &w);
    }while( w < x || w > y);

    return w;
}

int main(){
    int valor = meu_scan(0, 1000);
    printf("Valor digitado: %d", valor);
    return 0;
}


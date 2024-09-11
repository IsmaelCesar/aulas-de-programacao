#include <stdio.h>
#define MAX 100

int somatorio(int inicio, int final);

int sub(int x, int y){
    return x - y;
}

int main(){

    int x, y, z;
    scanf("%d,%d,%d", &x, &y, &z);
    somatorio(40, 50);
    printf("%d,%d,%d", x,y,z );
    sub(10 , 20);
    printf("Valor de MAX: %d", MAX);
    return 0;
}

int somatorio(int inicio, int final){
    int soma = 0;
    printf("Valor de MAX: %d", MAX);
    for(int x = inicio; x <= final; x+=2){
        if(x % 2 == 0){
            soma += x;
        }
    }
    return soma;
}

#include <stdio.h>

typedef struct elemento { 
    char flag;
    int valor;
} elemento;


int main(){
    elemento vet[4] = {
        {'j', 10},
        {'f', 20},
        {'j', 10},
        {'f', 20},
    };

    elemento soma = {'j', 0};
    for(int i = 0 ; i <= 100; i++){
        if(vet[i].flag == 'j'){
            soma.valor += vet[i].valor;
        }
    }
    printf("%d", soma);

    return 0;
}
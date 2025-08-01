#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void soma_tres(int *x){
    *x += 3;
}

int main(){
    int k = 1, b = 4;
    int *pk = &k, *pb = &b;
    for(int i = 0; i < 4 ; i++){
        soma_tres(&b);
        troca(pk, pb);
    }
    printf("%d %d", k, b);
    return 0;
}

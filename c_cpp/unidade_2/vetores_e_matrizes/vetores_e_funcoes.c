#include <stdio.h>

void troca_ab(char g[2]){
    g[0] = 'A';
    g[1] = 'b';
}


float somatorio(float k[5]){
    float soma = 0;
    for(int h = 0 ; h < 5; h++){
        soma += k[h];
    }
    return soma;
}

int somadois(int x){
    x += 2;
    return x;
}

void somadois_vetor(int k[1]){
    k[0] = k[0] + 2;
}

int main(){
    int v[1];
    v[0] = 10;
    printf("Valor antigo de v[0]: %d\n", v[0]);
    somadois_vetor(v);
    printf("Valor novo de v[0]: %d\n", v[0]);
    
    // int y = 2;
    // printf("Valor antigo de y: %d\n", y);
    // y = somadois(y);
    // printf("Valor novo de y: %d\n", y);

    // char q[2];
    // q[0] = 'D';
    // q[1] = 'i';
    // printf("Valor antigo de q: %c%c\n", q[0], q[1]);
    // troca_ab(q);
    // printf("Valor novo de q: %c%c", q[0], q[1]);

}

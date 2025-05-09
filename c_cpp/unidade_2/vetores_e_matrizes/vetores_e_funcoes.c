#include <stdio.h>

int somadois(int x){
    return x + 2;
}

void somadois_vetor(int k[1]){
    k[0] = k[0] + 2;
}

void troca_ab(char g[2]){
    g[0] = 'A';
    g[1] = 'b';
}


int main(){
    // int y = 2;
    // printf("Valor antigo de y: %d\n", y);
    // y = somadois(y);
    // printf("Valor novo de y: %d\n", y);

    // int v[1];
    // v[0] = 10;
    // printf("Valor antigo de v[0]: %d\n", v[0]);
    // somadois_vetor(v);
    // printf("Valor novo de v[0]: %d\n", v[0]);

    char q[2];
    q[0] = 'D';
    q[1] = 'i';
    printf("Valor antigo de q: %c%c\n", q[0], q[1]);
    troca_ab(q);
    printf("Valor novo de q: %c%c", q[0], q[1]);

}

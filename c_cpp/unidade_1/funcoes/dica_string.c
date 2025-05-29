#include <stdio.h>

int main(){

    int k = 10; 
    float h = 7.6 ;
    char y = 'A';

    char mensagem[] = "valor de k: %d, \nvalor de h: %.2f,\n valor de y: %c\n\n";

    printf(mensagem, k, h, y);

    printf(mensagem, 150, 7.7, 'B');
    printf(mensagem, 5000, 88.7, 'f');

    return 0;
}

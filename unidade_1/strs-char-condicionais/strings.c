#include <stdio.h>

int main(){
    char a[50] = "Abcde";
    printf("%s", a);

    char nome[50];
    printf("Digite seu nome:");
    //scanf("%s", nome);
    //gets(nome);
    scanf("%50[^\n]", nome);

    printf("Seu nome eh: %s\n", nome);

    printf("Posicao 0: %c\n", nome[0]);
    printf("Posicao 1: %c\n", nome[1]);
    printf("Posicao 2: %c\n", nome[2]);
    return 0;
}
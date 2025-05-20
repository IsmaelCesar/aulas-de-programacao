#include <stdio.h>

int main(){
    char minha_string[100] = "ab";

    printf("Valor de minha_string: %s\n\n", minha_string);
    
    char nome_completo[100];
    printf("Digite seu nome: ");
    gets(nome_completo);
    fgets(nome_completo, 10, stdin);
    scanf("%100[^\n]", nome_completo);

    printf("Seu nome e: %s", nome_completo);

    return 0;
}
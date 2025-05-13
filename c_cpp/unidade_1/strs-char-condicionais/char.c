#include <stdio.h>

int main(){
    char nome_v = 'B';
    printf("Valor nome_v: %c\n", nome_v);

    char novo_c;
    printf("Digite um caractere: ");
    scanf("%c", &novo_c);
    printf("Voce digitou: %c\n", novo_c);

    printf("Digite outro caractere: ");
    scanf(" %c", &novo_c);
    novo_c = getchar();
    fflush(stdin);
    scanf("%c", &novo_c);
    fflush(stdin);
    printf("Voce digitou: %c\n", novo_c);

    char c1 = 'A';
    printf("Valor de c1: %d\n", c1);
    printf("Valor de c1: %c\n", 65);
    printf("Valor de c1: %c\n", '7');
    printf("Valor de c1: %d\n", 7);
    printf("Valor de c1: %c\n", 7);

    char nome_s[50] = "Esta eh uma string.";
    printf("\n\n\n\nValor da string: %s\n\n\n\n\n", nome_s);
    
    char nome_pessoa[100];
    printf("Digite seu nome: ");
    // scanf("%s", nome_pessoa);
    fgets(nome_pessoa, 99, stdin);
    gets(nome_pessoa);
    scanf("%100[^\n]", nome_pessoa);

    printf("Seu nome eh: %s", nome_pessoa);
    return 0;
}
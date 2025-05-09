#include <stdio.h>

int main(){
    /* char a;
    printf("Digite um caracter: ");
    //fflush(stdin); a = fgetchar(); fflush(stdin);
    //a = getchar();
    scanf("%c", &a);
    //fflush(stdin); scanf("%c", &a); fflush(stdin);

    printf("Valor do caracter: %c\n", a);

    char v;
    printf("Digite um novo caracter: ");
    //fflush(stdin); a = fgetchar(); fflush(stdin);
    //v = getchar();
    scanf(" %c", &v);
    //fflush(stdin); scanf("%c", &a); fflush(stdin);

    printf("Valor do caracter: %c\n", v); */

    int max; 
    printf("Digite o tamanho maximo:");
    scanf("%d", &max);

    char minha_string[max]; 

    printf("Digite um nome: ");
    scanf("%s", minha_string);

    printf("Seu nome eh: %s\n", minha_string);
    return 0;
}
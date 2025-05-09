/// Programa básico
#include <stdio.h>

int main(){

    int var1; 
    float var2; 
    double var4;

    printf("Digite um numero inteiro:");
    scanf("%d", &var1); 
    // %d -> inteiros
    // %f -> floats
    // %lf -> double

    printf("Valor de var1: %d\n", var1);

    printf("Digite um float:");
    scanf("%lf", &var2);

    printf("Valor de var2: %.2f\n", var2);

    // +, -, *, /, %

    char var5, var6;

    var5 = 'q';

    printf("Valor de var5: %c\n", var5);

    printf("Digite um caractere: ");
    scanf("%c", &var6);
    printf("Valor de var6: %c\n", var6);
    printf("Digite um caractere: ");
    scanf(" %c", &var6);
    printf("Novo valor de var6: %c\n", var6);

    char nome_str[60];
    printf("Digite uma string: ");
    scanf("%s", nome_str);
    gets(nome_str);
    fgets(nome_str, 59, stdin);

    printf("Valor da string: %s", nome_str);

    return 0;
}

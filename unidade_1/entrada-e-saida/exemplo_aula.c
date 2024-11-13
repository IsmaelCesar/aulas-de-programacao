#include <stdio.h>

int main(){

    // printf("\t Esta eh \n uma \n mensagem \n muito \n grande!");

    int var_1 = 14, var_2 = 22, var_3 = 44;

    printf("Valor var_1: %d Valor var_2: %d", var_1, var_2);

    printf("\nValor var_3: %d Valor var_1: %d ", var_3, var_1);

    // scanf("%d", &var_2);

    printf("\nValor var_2: %d", var_2);

    printf("\nDigite o valor de var_3 e var_1: ");

    scanf("%d %d", &var_3, &var_1 );

    printf("Valor var_3: %d, Valor var_1: %d", var_3, var_1);

    int valor = 0;

    valor = 100 + 200;
    valor = 100 - 200;
    valor = 100 * 200;
    valor = 100 / 200;
    valor = 100 % 200;

    valor = var_3 * var_1;    

    // salvar o valor digitado pelo usuario em valor_2
    // e imprimir o cubo do valor salvo em valor_2
    int valor_2; 

    printf("Digite o valor de valor_2:");
    scanf("%d", &valor_2);

    int temp = valor_2 * valor_2 * valor_2;

    printf("valor_2: %d", temp);

    int a =10, b = 50;

    int aux = a;
    a = b; // a = 50; b = 50; aux = 10;
    b = aux; // a = 50; b = 10; aux = 10;

    printf("a: %d b: %d", a, b);

    return 0;
}


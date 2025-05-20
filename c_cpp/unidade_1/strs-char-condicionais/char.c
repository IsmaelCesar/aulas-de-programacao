#include <stdio.h>

int main(){
    char c3 = 'c';
    printf("Valor de c3: %c", c3);

    char c4;
    printf("\n\n\nDigite um caractere: ");
    scanf("%c", &c4);
    printf("O valor de c4: %c\n", c4);
    printf("Digite outro caractere:");
    scanf(" %c", &c4);
    c4 = getchar();
    fflush(stdin);scanf("%c", &c4);fflush(stdin);
    printf("O novo valor de c4: %c\n", c4);


    char c5 = 'A';
    printf("\n\nValor de c5: %c", c5);
    printf("\n\nValor de c5: %c", c5+1);
    printf("\n\nValorde c5: %d", c5);
    printf("\n\nValor de c5: %d", c5+1);

    char c6 = '7';
    printf("\n\nValor de c6: %c", c6);
    printf("\n\nValor de c6: %d", c6);

    // Nome da tabela: ASCII

    return 0;
}
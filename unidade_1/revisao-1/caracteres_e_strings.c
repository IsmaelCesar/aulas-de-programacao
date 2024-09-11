#include <stdio.h>

int main(){

    char my_char; 

    printf("Digite um caractere: ");
    scanf("%c", &my_char);
    printf("Caractere digitado: %c\n", my_char);
    
    char my_char2; 

    printf("Digite um caractere: ");
    scanf(" %c", &my_char2);
    printf("Outro Caractere digitado: %c\n", my_char2);
    return 0; 
}
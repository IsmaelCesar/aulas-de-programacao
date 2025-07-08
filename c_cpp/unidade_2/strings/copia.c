#include <stdio.h>
#include <string.h>

int main(){
    
    char txt1[100] = "Este eh o texto 1 askd oaskdaldl kdkd f"; 
    char txt2[100] = "Este eh o texto 2";

    printf("\nValor antigo txt1: %s\n", txt1);
    strcpy(txt1, txt2);
    printf("Valor txt1: %s\n\n", txt1);
    printf("Valor txt2: %s\n\n", txt2);

    return 0;
}
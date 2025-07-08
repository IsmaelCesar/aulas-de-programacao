#include <stdio.h>
#include <string.h>

int main(){
    
    char txt1[100] = "Este eh o texto 1"; 
    char txt2[100] = "Este eh o texto 2";

    printf("\n\nValor antigo: %s", txt1);
    strcat(txt1, txt2);
    printf("\n\n Valor novo txt1: %s", txt1);
    printf("\n\n Valor antigo txt2: %s", txt2);

    return 0;
}
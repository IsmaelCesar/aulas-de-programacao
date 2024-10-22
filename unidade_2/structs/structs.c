#include <stdio.h>
#include <string.h>

typedef struct ponto { 
    float x;
    float y;
} Ponto;

typedef struct{
    char nome[50];
    Ponto p;
} Artificial;

int main(){
    
    float w = 10;
    
    Ponto p = {3.2, 4.4};

    Ponto w = { .y = 4.4 , .x = 2.2};

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *f = fopen("outros_valores.txt", "r");

    int v1; 
    float v2;
    char frase[50];

    fscanf(f, "%d\n", &v1);
    printf("Valor de v1: %d", v1);

    fscanf(f, "%f\n", &v2);
    printf("\nValor de v2: %.2f", v2);
    
    // fscanf(f, "%s", frase);
    // fgets(frase, 100, f);
    fscanf(f, "%50[^\n]", frase);
    printf("\nValor da frase: %s", frase);

    
    fclose(f);
    
    // fprintf(f, "Mensagem do arquivo.\n");
    // fprintf(f, "Esta\n eh\n uma\n nova\n mensagem.");
    // int x = 10; 
    // float k  = 50.5;
    // char h = 'j';
    // char nome[50] = "Batman";
    // fprintf(f, "Mensagem dentro do arquivo");
    // fprintf(f, "\nOutra mensagem\n");
    // fprintf(f, "Valor de x: %d\n", x);
    // fprintf(f, "Valor de k: %.2f\n", k);
    // fprintf(f, "Valor de h: %c\n", h);
    // fprintf(f, "Valor de nome: %s\n", nome);




    return 0;
}
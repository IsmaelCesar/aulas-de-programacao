#include <stdio.h>
#include <stdlib.h>

void escreve_binario(){
    FILE *f = fopen("arquivo.bin", "wb");
    // wb - escrita , rb - leitura , ab - concatenacao

    int valor_1 = 10;
    float valor_2 = 129.8;

    fwrite(&valor_1, sizeof(int), 1, f);
    fwrite(&valor_2, sizeof(float), 1, f);

    fclose(f);
}

void ler_binario(){

    int valor_1;
    float valor_2;

    FILE *f = fopen("arquivo.bin", "rb");

    fread(&valor_1, sizeof(int), 1, f);
    fread(&valor_2, sizeof(float), 1, f);

    printf("Valor lido tipo (int): %d\n", valor_1);
    printf("Valor lido tipo (float): %.2lf\n", valor_2);

    fclose(f);
}

void escreve_binario_alternativo(int *valor_1, float *valor_2){
    FILE *f = fopen("alternativo.bin", "wb");

    fwrite(valor_1, sizeof(int), 1, f);
    fwrite(valor_2, sizeof(float), 1, f);

    fclose(f);
}

void ler_binario_alternativo(){
    int w;
    float x;
    FILE *f = fopen("alternativo.bin", "rb");

    fread(&w, sizeof(int), 1, f);
    fread(&x, sizeof(int), 1, f);

    printf("Valor lido tipo (int): %d\n", w);
    printf("Valor lido tipo (float): %.2lf\n", x);

    fclose(f);
}

int main(){

    escreve_binario();
    ler_binario();

    // escrevendo binario alternativo
    int x = 10;
    float y = 14.2;
    escreve_binario_alternativo(&x, &y);
    ler_binario_alternativo();

    return 0;
}

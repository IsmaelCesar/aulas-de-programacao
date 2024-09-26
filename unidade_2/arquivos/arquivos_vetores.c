#include <stdio.h>
#include <stdlib.h>

void escreve_vetor_txt(){
    int v[3] = {13, 14, 15};

    FILE *f = fopen("vetores.txt", "w");

    for(int i = 0; i < 3; i++){
        fprintf(f, " %d ", v[i]);
    }
    
    fclose(f);
}

void ler_vetor_txt(){
    int v[3];

    FILE *f = fopen("vetores.txt", "r");

    for(int i = 0; i < 3; i++){
        fscanf(f, " %d ", &v[i]);
    }

    // imprimindo vetor
    printf("\nImprimindo vetor: (txt)\n");
    for(int i = 0; i < 3 ; i++){
        printf(" %d ", v[i]);
    }
    printf("\n");

    fclose(f);
}

void ler_vetor_txt_alternativo(){
    int v[50];

    FILE *f = fopen("vetores.txt", "r");

    int i = 0;
    while (!feof(f)){
        fscanf(f, " %d ", &v[i]);
        i++;
    }
    
    // imprimindo vetor
    printf("Imprimindo vetor: \n");
    for(int k = 0; k < i; k++){
        printf(" %d ", v[k]);
    }
    printf("\nTotal: %d\n", i);

    fclose(f);
}

void escreve_vetor_binario(){
    int v[4] = {20, 21, 22, 23};

    FILE *f = fopen("vetores.bin", "wb");

    fwrite(v, sizeof(int), 4, f);

    fclose(f);
}


void ler_vetor_binario(){
    int v[4];

    FILE *f = fopen("vetores.bin", "rb");

    fread(v, sizeof(int), 4, f);

    // Imprimindo vetor
    printf("Imprime vetor (bin):\n");
    for(int i = 0; i < 4; i++){
        printf(" %d ", v[i]);
    }

    fclose(f);
}

int main(){

    escreve_vetor_txt();
    ler_vetor_txt();
    ler_vetor_txt_alternativo();

    // Arquivos binários
    escreve_vetor_binario();
    ler_vetor_binario();

    return 0;
}

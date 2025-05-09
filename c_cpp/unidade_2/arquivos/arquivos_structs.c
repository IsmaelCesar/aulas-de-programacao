#include <stdio.h>
#include <stdlib.h>

typedef struct mesa{
    char marca[50];
    int num_pernas;
} mesa;

void salva_estrutura_txt(){
    mesa m1 = {"Super mesas", 4};

    FILE *f = fopen("mesas.txt", "w");

    fprintf(f, "%s\n%d", m1.marca, m1.num_pernas);

    fclose(f);
}


void ler_estrutura_txt(){
    mesa m; 
    FILE *f = fopen("mesas.txt", "r");

    fgets(m.marca, 50, f);
    fscanf(f, "%d", &m.num_pernas);

    printf("Estrutura lida: \n");
    printf("\tMarca: %s\n", m.marca);
    printf("\tNum pernas: %d\n", m.num_pernas);

    fclose(f);
}

void salva_estrutura_bin(){
    
    mesa m1 = {"Micro mesas", 3};

    FILE *f = fopen("mesas.bin", "wb");
    // wb - escrita ; rb - leitura ; ab - concatenação

    fwrite(&m1, sizeof(mesa), 1, f);

    fclose(f);
}

void ler_estrutura_bin(){
    mesa m;

    FILE *f = fopen("mesas.bin", "rb");

    fread(&m, sizeof(mesa), 1, f);

    printf("Estrutura Lida: \n");
    printf("\t Marca: %s\n", m.marca);
    printf("\t Num pernas: %d\n", m.num_pernas);

    fclose(f);
}

int main(){

    // salva_estrutura_txt();
    // ler_estrutura_txt();

    // salva_estrutura_bin();
    ler_estrutura_bin();
    return 0;
}

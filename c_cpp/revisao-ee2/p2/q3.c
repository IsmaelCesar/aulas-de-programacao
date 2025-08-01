#include <stdio.h>

typedef struct {
    char nome_autor[100];
    int num_paginas;
    float preco;
} Livro;

int main(){
    Livro l[5] = {
        {"JRR Martin", 1000, 255.99},
        {"Sidney Christie", 250, 64.88},
        {"Agatha Sheldon", 120, 98.40},
        {"Dante Tolkien", 850, 118.40},
        {"George Alighieri", 105, 25.10},
    };
    Livro temp;
    FILE *f = fopen("livros.txt", "w");
    for(int i = 0; i < 5; i++){
        for(int j = i; j < 4; j++){
            if(l[j].preco > l[j+1].preco){
                temp = l[j];
                l[j] = l[j+1];
                l[j+1] = temp;
            }
            else if(l[j].num_paginas < l[j+1].num_paginas){
                temp = l[j+1];
                l[j+1] = l[j];
                l[j] = temp;
            }
        }
        fprintf(f, "%s %d %.2f\n", l[i].nome_autor, l[i].num_paginas, l[i].preco);
    }
    fclose(f);
}

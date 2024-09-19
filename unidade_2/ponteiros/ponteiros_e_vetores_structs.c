#include <stdio.h>
typedef struct mesa{ 
    int num_pernas;
    char marca[50];
} mesa; 


void atualiza_mesa(mesa *m){
    m->num_pernas = 4;
}

void imprime_mesas(mesa mesas[], int tam){
    for(int i = 0; i < tam ; i++){
        printf("Marca: %s\n", (*(mesas + i)).marca ); // mesas[i]->marca
        printf("Num pernas: %d\n", (*(mesas + i)).num_pernas );// mesas[i]->num_pernas
    }
}

int  main(){

    mesa mesas[3] = { 
        { .marca = "SuperMesa", .num_pernas = 5  },
        { .marca = "HiperMesa", .num_pernas = 7  },
        { .marca = "MegaMesas", .num_pernas = 10}
    };

    for(int i = 0; i < 3; i++){
        if((mesas + i)->num_pernas){ // mesas[i].num_pernas
            (mesas + i)->num_pernas = 3;
        }
    }

    return 0;
}
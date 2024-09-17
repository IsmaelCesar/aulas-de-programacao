#include <stdio.h>
typedef struct mesa{ 
    int num_pernas;
    char marca[50];
} mesa; 

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
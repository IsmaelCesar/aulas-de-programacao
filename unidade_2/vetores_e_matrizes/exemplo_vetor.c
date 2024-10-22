#include <stdio.h>

int main(){

    int vet[3][3];

    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            if(i==j){
                vet[i][j] = 1;
            }
            else{
                vet[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            printf(" %d ", vet[i][j]);
        }
        printf("\n");
    }

    return 0;
}
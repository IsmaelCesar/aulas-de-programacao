#include <stdio.h>
int main(){
    int matrix[3][3];

    int acumulador = 0;
    matrix[0][0] = -1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           
            if(j > 0){
                acumulador += matrix[i][j-1];
                matrix[i][j] = acumulador;
            }
            else if(i > 0){
                acumulador += matrix[i-1][2];
                matrix[i][j] = acumulador;
            }
        }
    }
    printf(" %d ", matrix[2][2]);
    return 0;
}

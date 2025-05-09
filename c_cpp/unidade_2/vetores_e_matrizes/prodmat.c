#include <stdio.h>

int main(){
    float mat1[2][2] = {{1, 1},
                        {2, 2}};
    float mat2[2][2] = {{3, 3}, 
                        {4, 4}};
    float result[2][2] = {{0, 0}, {0, 0}};

    for(int i = 0; i < 2; i++){    
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                result[i][j] += mat1[j][k]*mat2[k][j];
            }
        }
    }

    for(int i = 0; i < 2; i++){    
        for(int j = 0; j < 2; j++){
            printf(" %.2lf ", result[i][j]);
        }
        printf("\n");
    }
}
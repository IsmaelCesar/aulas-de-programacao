#include <stdio.h>

int main(){

    int matrix[15][15];

    int i = 0; // i = 14
    for(int j = 14; j >= 0; j--){// j = 0
        matrix[i++][j] = -1; // matrix[14][2] = -1
    }

    int m2[2][2] = {{1, 0}, {0, 1}};

    m2[0][1] = -1;
    m2[1][0] = -1;

    return 0; 
}
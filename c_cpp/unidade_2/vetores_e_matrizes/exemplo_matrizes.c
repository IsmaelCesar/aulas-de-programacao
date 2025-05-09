#include <stdio.h>

int my_function(float m[3][3]){// 2 matrizes. 1 float 5x5, 2 int 4x7
    m[1][1] = -4;
}

void another_function(float m[][7]){
    
}

int main(){
    float matrix[3][3];
    my_function(matrix);
    printf("%.2f\n", matrix[1][1]);

    return 0;
}

#include <stdio.h>

void update_next(char mat[2][6], int column){
    if(mat[0][column-1] == 'A'){
        mat[0][column] = 'B';
        mat[1][column] = 'A';
    }
    else if(mat[1][column-1] == 'A'){
        mat[1][column] = 'B';
        mat[0][column-1] = 'C';
        mat[0][column] = 'B';
    }
    else{
        mat[0][column] = 'A';
        mat[1][column] = 'C';
    }
}
int main(){
    char mat[2][6];
    mat[0][0] = 'A';
    mat[1][0] = 'B';
    for(int i = 1; i < 6; i++){
        update_next(mat, i);
    }
    printf("%c %c", mat[0][5], mat[1][5]);
    return 0;
}

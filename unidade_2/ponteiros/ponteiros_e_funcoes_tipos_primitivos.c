#include <stdio.h>

void funcao_ptr(int *v){
    *v = *v + 20;
}

void outra_funcao_ptr(int *v, float *f, char *g){
    //...
}

int main(){

    int x = 10;
    int *ptr_x = &x;

    printf("Valor antes da funcao: %d\n", x);
    funcao_ptr(ptr_x);
    printf("Valor depois da funcao: %d\n", x);


    // alternativamente
    int y = 30; 
    printf("Valor antes da funcao: %d\n", y);
    funcao_ptr(&y);
    printf("Valor depois da funcao: %d\n", y);

    return 0;
}
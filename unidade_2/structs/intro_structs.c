#include <stdio.h>

// Structs

typedef struct {
    int a1;
    float a2;
    double a3;
    char a4;
} MinhaStruct;

int main(){

    MinhaStruct v1;

    MinhaStruct v2;
    v2.a4 = 'q';
    v2.a1 = 33;
    v2.a3 = 4.4;
    v2.a2 = 1.1;

    printf("v2.a1: %d", v2.a1);
    printf("v2.a2: %f", v2.a2);
    printf("v2.a3: %f", v2.a3);
    printf("v2.a4: %c", v2.a4);


    return 0;
}
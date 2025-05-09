#include <stdio.h>

// Structs
struct nome_struct{
    int a1;
    float a2;
    double a3;
    char a4;
};


int main(){
    struct nome_struct v1;
    v1.a1 = 11;
    v1.a2 = 11.1;
    v1.a3 = 12.222222;
    v1.a4 = 'c';
    
    struct nome_struct v2;
    v2.a1 = 12;
    v2.a2 = 13.3;
    v2.a3 = 14.444444;
    v2.a4 = 'b';

    struct nome_struct v3;
    v3.a1 = 14;
    v3.a2 = 10.2;
    v3.a3 = 15.55;
    v3.a4 = 'c';

    printf("v3.a1: %d\n", v3.a1);
    printf("v3.a2: %f\n", v3.a2);
    printf("v3.a3: %f\n", v3.a3);
    printf("v3.a4: %c", v3.a4);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct ponto { 
    float x;
    float y;
};

int main(){
    struct ponto p;
    p.x = 1.1;
    p.y = 2.2;

    printf("x: %f y: %f\n", p.x, p.y);
    

    return 0;
}
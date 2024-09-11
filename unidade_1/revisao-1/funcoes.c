#include <stdio.h>
#include <math.h>

const float glob = 50.1;

int dobro_x(int x){
    return 2 * x;
}

int dobro_y(int y){
    int r = 2  * y;
    return r;
}

int sum_rec(int x){
    printf(" sum_rec: %d ", x);
    if(x == 0){
        return x;
    }
    return x + sum_rec(x-1);
}

float dobro(float new_valor){
    return new_valor * 2;
}

int main(){

    int num = 10;
    printf("\n%d", sum_rec(num));

    float valor = 0.12354676;

    printf("%50.5f\n", valor);

    printf("%.2f\n", pow(2, 0.5));

    int w = valor > 0? 1 : -1;
    printf("w: %d\n", w);

    for(int i = 1; i <= 5 ; i++){
        printf("Ei, pessoal!\n");
    }

    return 0;
}
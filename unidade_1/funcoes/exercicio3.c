#include <stdio.h>

int maior2(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}
        // x = 500, y = 1501, z = 2000
int maior3(int x, int y, int z){
    int teste1 = maior2(x, y);
    return maior2(teste1, z);
}

int main(){
    int num1, num2, num3;
    printf("Digite 3 numeros: ");
    scanf("%d,%d,%d", &num1, &num2, &num3);

    printf("Maior valor: %d", maior3(num1, num2, num3));
    return 0;
}


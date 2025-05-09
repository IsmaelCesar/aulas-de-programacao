#include <stdio.h>

int main(){
    int num;
    int total = 3;

    for(int i = 0; i < total; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);

        for(int i = 1; i < num; i++){
            if(num % i == 0){
                printf("Divisor: %d\n", i);
            }
        }
    }

    return 0;
}
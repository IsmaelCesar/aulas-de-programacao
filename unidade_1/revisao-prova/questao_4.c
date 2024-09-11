#include <stdio.h>

int recursivo(int x){
    if(x <= 0){
        return 0;
    }
    else {
        return 1 + recursivo(x/100);
    }
}

int main(){
    int num = 15463;

    printf("%d", recursivo(num));

    return 0;
}
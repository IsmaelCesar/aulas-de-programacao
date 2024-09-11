#include <stdio.h>

int serie(int num){
    if(num == 1 || num == 2){
        return 2;
    }
    else {
        return serie(num - 1) * serie(num - 2);
    }
}

int main(){
    int i;
    i = 0;
    for(int i = 0; i < 5; i++){
        printf("%d, ", serie(i+1));
    }
    return 0;
}
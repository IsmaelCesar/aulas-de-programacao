#include <stdio.h>

int main(){
    int x = 10; 
    int y = 11; 
    y = x + y;
    x = x * 10;
    if(x == y){
        printf("Mensagem 1\n");
        printf("Mensagem 2\n");
        printf("Mensagem 3\n");
    }
    else{
        printf("Mensagem Extra 1\n");
        printf("Mensagem Extra 2\n");
        printf("Mensagem Extra 3\n");
    }
    printf("Mensagem 4\n");

    return 0;
}
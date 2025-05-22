#include <stdio.h>

int main(){
    
    int valor, valor2;
    scanf("%d", &valor);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", valor, i, i*valor);
        printf("Digite 0 para continuar: ");
        scanf("%d", &valor2);
        if(valor2 != 0){
            break;
        }
    }
    printf("TCHAU\n"); 
    printf("TCHAU\n"); 
    printf("TCHAU\n"); 
    printf("TCHAU\n"); 
    printf("TCHAU\n"); 
    printf("TCHAU\n"); 
    printf("TCHAU\n"); 
    printf("TCHAU\n"); 
    
    
    return 0 ;
}
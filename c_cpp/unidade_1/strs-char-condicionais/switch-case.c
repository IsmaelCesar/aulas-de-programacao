#include <stdio.h>

int main(){
    /* switch(valor){
        case 10:
            printf("Mensagem 1\n");
        break;
        case 11:
            printf("Mensagem 2\n");
        break;
        default: 
            printf("Valor inesperado");
    } */
   
   //==============
    int valor = 12; 
    switch(valor){
        case 10:
            printf("Mensagem 1\n");
            break;
        case 11:
            printf("Mensagem 2\n");
            break;
        case 12:
            printf("Mensagem 3\n");
            break;
        case 13: 
            printf("Mensagem 4\n");
            break;
        default: 
            printf("Valor inesperado");
    }
    if(valor == 10){
        printf("Mensagem 1\n");
    }
    if(valor == 11){
        printf("Mensagem 2\n");
    }
    else if(valor == 12){
        printf("Mensagem 3\n");
    }
    else if(valor == 13){
        printf("Mensagem 4\n");
    }
    else{
        printf("Valor mensagem\n");
    }

    /* if(valor == 10){
        ///...
    }
    else if (valor == 11){
        //...
    }
    else{
        //...
    } */
}
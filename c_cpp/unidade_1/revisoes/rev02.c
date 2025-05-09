/// Estruturas condicionais
#include <stdio.h>

int main(){
    // 0 -> Falso
    // 1 -> Verdadeiro

    // > , <, >=, <=
    // ==, !=
    // ! -> Negação
    // 5 > 4 -> Verdadeiro
    // !(5 > 4) -> Falso

    int a = 10, b = 50; 

    printf("a > b = %d\n", a > b);
    printf("!(a > b) = %d\n", !(a > b));

    // AND -> exp1 && exp2 
    // exp1 && exp2 = Resultado
    //  F  && F = F
    //  V  && F = F
    //  F  && V = F
    //  V  && V = V

    // OR -> exp1 || exp2
    // exp1 || exp2 = Resultado
    // V    ||  F  = V
    // F    ||  V  = V
    // V    ||  V  = V
    // F    ||  F  = F

    // exp1 && exp2 && exp3 && exp4

    // if
    int x = 11, y = 10;
    if(x != y){
        printf("AQUI!!!!");
    }

    // if, else
    if(y < x){
        printf("y > x!!!");
    }
    else{
        printf("y < x!!!!");
    }

    // if, else if
    if(y < x){
        printf("y > x!!!");
    }
    else if(y > 11){
        //...
    }
    else if (x > 23){
        //...
    }
    else{
        //...
    }

    // switch/case
    int w;
    printf("Digite um valor: ");
    scanf("%d", &w);

    switch (w){
        case 12:
            // ...
            break;
        case 14:
            // ...
            break;
        case 90:
            // ...
            break;
        default:
            //...
            break;
    }

    // transformar switch em if else
    if(w == 12){
        // ...
    }
    else if(w == 14){
        // ...
    }
    else if(w == 90){
        //...
    }
    else{
        //...
    }   

}
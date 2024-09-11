#include <stdio.h>

int ano_bisexto(int ano){
    if(ano % 4 == 0){
        return 1; // verdadeiro
    }
    else if ( ano % 100 == 0){
        return 1;
    }
    else if ( ano % 400 == 0){
        return 1;
    }
    return 0;
}

int main(){
    int ano;
    printf("Digite o ano:");
    scanf("%d", &ano);

    return 0;
}


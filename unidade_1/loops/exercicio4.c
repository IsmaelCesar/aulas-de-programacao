#include <stdio.h>

int main(){
    char nome[60];
    float salario = 1.0;
    int ano_nasc;

    float cont = 0;
    float soma = 0;

    while (salario > 0){
        //printf("Digite seu nome:");
        //gets(nome);
        //scanf("%60[^\n]", nome);

        printf("Digite seu salario: ");
        scanf("%f", &salario);

        //printf("Digite o ano de nascimento: ");
        //scanf("%d", &ano_nasc);

        if(salario < 0){
            break; // semente do mal
        }
        cont++;
        soma = soma + salario;
    }

    float media = soma / cont;

    printf("Media: %f\n", media);

    return 0;
}
#include <stdio.h>

int inverte_num(int num){
    int centena, dezena, unidade;
    centena =num / 100;
    dezena = (num / 10) % 10;
    unidade = num % 10;
    return 100 * unidade + 10 * dezena + centena;
}

int main(){
    int numero;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);

    int resultado = inverte_num(numero);
    printf("Numero invertido: %d", resultado);

    return 0;
}


#include <stdio.h>

int main(){
    int valor = 11; 
    int novo_valor = valor  > 10 ? valor + 1: -1;
    printf("Novo valor: %d\n", novo_valor);

    int alt = 30;
    int x = 11, y =-1;
    int valor_alt = alt > 10 ? (x > 50 ? 33: -15) : (y < 70 ? 12: 14);

    printf("Valor alternativo: %d", valor_alt);
}
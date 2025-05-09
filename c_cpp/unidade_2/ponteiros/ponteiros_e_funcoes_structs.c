#include <stdio.h>

typedef struct carro { 
    char modelo[10];
    int ano; 
    double preco;
} carro;

void imprime_carro(carro *ptr_carro){
    printf("Modelo: %s\n", ptr_carro->modelo);
    printf("Ano: %d\n", ptr_carro->ano);
    printf("Preco: %.2lf\n", ptr_carro->preco);
}

void inicializa_carro(carro *ptr_novo_carro){
    printf("Digite o modelo do carro: "); 
    scanf("%10[^\n]", ptr_novo_carro->modelo);
    printf("Digite o ano do carro: ");
    scanf("%d", &ptr_novo_carro->ano);
    printf("Digite o preco do carro: "); 
    scanf("%f", &ptr_novo_carro->preco);
}

int main(){

    carro c = { "fiesta", 1999, 60000 };

    imprime_carro(&c);

    carro novo_carro;
    carro *ptr_nc = &novo_carro;
    inicializa_carro(ptr_nc);
    imprime_carro(ptr_nc);

    return 0;
}
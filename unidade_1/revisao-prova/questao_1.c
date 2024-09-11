#include <stdio.h>
#define PI 3.14159

double areaCirculo(double raio) {
    return PI * raio * raio;
}

double areaQuadrado(float lado) {
    return lado * lado;
}

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

int main() {
    char escolha;
    double raio, lado, base, altura;

    do{
        printf("Escolha a forma geométrica:\n");
        printf("[C] - Calcula área do círculo\n");
        printf("[Q] - Calcula área do quadrado\n");
        printf("[T] - Calcula área do triângulo\n");
        printf("[S] - Encerra programa\n");
        scanf(" %c", &escolha);
    
        switch (escolha) {
        case 'C': 
            printf("Digite o raio do círculo: ");
            scanf("%lf", &raio);
            printf("A área do círculo é: %.2lf\n", areaCirculo(raio));
        break;
        case 'Q':
            printf("Digite o lado do quadrado: ");
            scanf("%lf", &lado);
            printf("A área do quadrado é: %.2lf\n", areaQuadrado(lado));
        break;
        case 'T':
            printf("Digite a base do triângulo: ");
            scanf("%lf", &base);
            printf("Digite a altura do triângulo: ");
            scanf("%lf", &altura);
            printf("A área do triângulo é: %.2lf\n", areaTriangulo(base, altura));
        break;
        case 'S':
            printf("O programa está sendo encerrado…\n");
        default:
            printf("Opção inválida.\n");
        }
    }while(escolha != 'S');
    return 0;
}
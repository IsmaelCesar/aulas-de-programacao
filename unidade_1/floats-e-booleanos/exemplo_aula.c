#include <stdio.h>
#include <math.h>

int main(){

    float nome_v = 10.5538;
    // %f
    printf("Valor nome_v: %f\n", nome_v);
    printf("Valor nome_v: %.2f -> Com duas casas decimais\n", nome_v);
    printf("Valor nome_v: %30f\n", nome_v);

    double nome_v2 = 10.58684837777;
    printf("Valor nome_v2: %lf\n", nome_v2);
    printf("Valor nome_v2: %lf\n", nome_v2);

    double x; 
    x = 10 + 11;
    x = 10 - 11;
    x = 10 * 11;
    x = 10 / 11;

    double y;
    scanf("%lf", &y); //double - %lf, float %f

    printf("Valor y: %f", y);

    // OP. CMP.
    // Valores == Números
    // Tudo não for 0 -> Verdadeiro
    // 0 -> Falso
    // float w, z;
    // w > z; 
    // w < z;
    // w == z;
    // w != z;
    // !(w < z);

    // AND , OR
    // AND -> (t == y) && (f < g)
    // OR  -> (t == y) || (f < g)

    return 0; 
}

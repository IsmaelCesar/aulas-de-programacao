#include <stdio.h>
#include <math.h>

int main(){
    float rendimentos, her_d, patrimonio;
    printf("Digite rendimentos, her_d, patrimonio:");
    scanf("%f, %f, %f", &rendimentos, &her_d, &patrimonio);

    printf("%d", (rendimentos > 15764.28) || (her_d > 40000) || (patrimonio > 80000) );
    return 0;
}
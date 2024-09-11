#include <stdio.h>
#include <math.h>

int main(){
    float xA, yA, xB, yB, xC, yC;
    printf("Digite x, y: ");
    scanf("%f, %f", &xA, &yA);

    printf("Digite x, y: ");
    scanf("%f, %f", &xB, &yB);

    printf("Digite x, y: ");
    scanf("%f, %f", &xC, &yC);

    float pow_xAxB = pow(xA - xB, 2);
    float pow_yAyB = pow(yA - yB, 2);
    float dAB = sqrt(pow_xAxB + pow_yAyB);

    float pow_xAxC = pow(xA - xC, 2);
    float pow_yAyC = pow(yA - yC, 2);
    float dAC = sqrt(pow_xAxC + pow_yAyC);

    printf("dAB: %f, dAC: %f", dAB, dAC);

    return 0;
}
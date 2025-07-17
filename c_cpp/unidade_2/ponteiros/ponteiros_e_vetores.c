#include <stdio.h>

void soma_dois(float *vet, int tam){
    for(int i = 0; i < tam; i++){
        *(vet + i) = *(vet + i) + 2; // vet[i] = vet[i] + 2;
    }
}


void quadrado(float *ptr_f){
     *ptr_f = *ptr_f * *ptr_f;
}


int main(){
    float my_vector[4] = {1.1, 2.2, 6.0, 4.4};

    printf("Ponteiro vetor: %p\n", my_vector);
    // printf("Ponteiro vetor: %d\n", my_vector);               // my_vector[0]
    printf("Primeiro elemento:(ptr: %p , val: %.2lf)\n", my_vector, *my_vector); // my_vector[0]
    printf("Segundo elemento: (ptr: %p , val: %.2lf)\n", my_vector + 1, *(my_vector + 1)); // *(my_vector + 1) =  my_vector[1]
    printf("Terceiro elemento: (ptr: %p , val: %.2lf)\n", my_vector + 2, *(my_vector + 2)); //*(my_vector + 2) = my_vector[2]
    printf("Quarto elemento: (ptr: %p , val: %.2lf)\n", my_vector + 3, *(my_vector + 3)); // *(my_vector + 3) = my_vector[3]
    printf("\n\n");                                                                         // *(my_vector + i) = my_vector[i]

    printf("Vetor\n");
    for(int i = 0; i < 4; i++){
        printf(" %.2lf ", *(my_vector + i));//*(my_vector + i) =  my_vector[i]
    }

    printf("\nQuadrado do terceiro elemento: \n");
    quadrado(my_vector + 2);
    printf("%.2lf\n", my_vector[2]); // *(my_vector + 2)

    soma_dois(my_vector, 4);

    printf("Vetor somado de dois\n");
    for(int i = 0; i < 4; i++){
        printf(" %.2lf ", my_vector[i]); // *(my_vector + i)
    }
    printf("\n");

    printf("Lendo vetor:");
    for(int i = 0 ; i < 4; i++){
        printf("Digite um valor:");
        scanf("%f", my_vector + i);
    }
    return 0;
}
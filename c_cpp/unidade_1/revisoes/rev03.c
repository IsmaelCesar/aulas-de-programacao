// estruturas de iteração
#include <stdio.h>

int main(){

    // 1. Condição de Permanência 
    // 2. Variável de controle
    // 3. Atualização

    // while
    int i = 100;
    while (i > 0){
        printf("i: %d\n", i);
        i--; // i = i - 1;
    }
    
    // do/ while
    int j = 0; 
    do{
        printf("j: %d\n", j);
        j++; // j = j + 1;
    }while(j < 100);

    // somatório dos numeros entre 1000, 1000000
    int soma = 0;
    int k = 1000;
    while (k <= 1000000){
        soma = soma + k;
        k++;
    }
    
    // for(init; cond. perm. ; att)
    soma = 0; 
    for(int l = 1000; l <= 1000000; l++){
        soma = soma + l;
        //...
        if(cond){
            break; //
        }
        //...
    }

}
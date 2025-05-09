#include <stdio.h>

int main(){
    int max = 0;
    while(max < 10){
        printf("Digite o valor de max :");
        scanf("%d", &max);

        printf("\nEi pessoal!\n");
        printf("Ei mocada!\n");
        printf("Carnaval comeca no galo da madrugada!\n\n");
    }

    int ctrl = -12;
    while (ctrl < 0){
        printf("CTRL: %d\n", ctrl);
        ctrl += 1;
    }

    for(int ctrl_1 = -12; ctrl_1 < 0; ctrl_1++){
        printf("CTRL: %d\n", ctrl);
    }

    // var ++ -> var = var + 1;
    // var += x -> var = var + x;
    return 0;
}
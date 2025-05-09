#include <stdio.h>

void my_function(int v[2], float w){
    v[4] = -30;
    w = 50.5;
}
int main(){
    char my_string[50] = "aosdkoakdoakpdokapk amsd";
    int valores[10] = {1, 2, 3, 4, 5, -6, 7, 8, 9, 10};
    float w2 = 10;
    //  printf("%d", valores[0]);
    // my_function(valores, w2);
    // my_another_function(valores, 10);
    // printf("w: %.2f\n", w2);
    // printf("v[4] = %d\n", valores[4]);

    for(int i = 0; i < 10; i++){
        valores[i] += 10;
    }

    return 0;
}

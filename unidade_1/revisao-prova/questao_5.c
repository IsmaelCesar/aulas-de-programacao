#include <stdio.h>

int main(){
    int num = 5, primeiro = 0, segundo = 1;
    int proximo, c, d = 0;
    for(c = 0; c < num; c++){
        if(c <= 1){ // 4
            proximo = c; // 
        }
        else {
            proximo = primeiro + segundo; // 3
            primeiro = segundo; // 2
            segundo = proximo; // 3
        }
        d = d + proximo; // 7 = 4 + 3   
    }

    printf("%d", d);
    return 0;
}
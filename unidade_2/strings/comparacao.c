#include <stdio.h>
#include <string.h>

int main(){
    
    char txt1[100] = "Bolla";
    char txt2[100] = "Bella";

    printf("%d", strcmp(txt2, txt1));

    return 0;
}
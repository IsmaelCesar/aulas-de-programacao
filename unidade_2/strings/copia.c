#include <stdio.h>
#include <string.h>

int main(){
    
    char txt1[100] = "Este eh o texto 1 askd oaskdaldl kdkd f"; 
    char txt2[100] = "Este eh o texto 2";

    strcpy(txt1, txt2);
    printf("%s", txt1);

    return 0;
}
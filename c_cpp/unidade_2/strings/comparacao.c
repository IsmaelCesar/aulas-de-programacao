#include <stdio.h>
#include <string.h>

int main(){
    
    char txt1[100] = "Bela";
    char txt2[100] = "Belo";
    
                    /// -1   0   1
    printf("%d", strcmp(txt1, txt2));

    return 0;
}
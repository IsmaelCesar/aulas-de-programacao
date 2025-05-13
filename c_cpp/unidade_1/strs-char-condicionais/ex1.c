#include <stdio.h>

int main(){
    int h = 15, j = 10, t = 16;
    int valor = h > 4 ? ( j > 5 ? j : (t > 16 ? 1: 2)): (t > 4 ? 8 : 9);
    return 0;
}
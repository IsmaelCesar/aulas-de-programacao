#include <stdio.h>

int main(){
    int w = 10; 
    int k = w > 10 ? 44 : 54;
    int h = k < 60 ? 70 : 89;

    int g = h > 50 ? (k < 3 ? 75 : 99):(k > w? k+99 : w + 100);
}
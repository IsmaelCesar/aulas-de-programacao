#include <stdio.h>

int main(){
 int a = 10, b = 4;
 int c = a/b;
 float d = -7;
 
 if(c>2){
    while(b>0){
        a = a+1;
        b=b-1;
        d = d+(a*b);
    }
  
  }else{
    int i;
    
    for(i=0;i<(c+1);i++){
        a = a+1;
        b = b-1;
        d = d+(a%b);
    }
  }
  printf("%d %d %d %.2f",a,b,c,d);
  return 0;
}
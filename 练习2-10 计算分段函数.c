#include <stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if(x==0){
        printf("f(0.0) = 0.0\n");
    }else{
        printf("f(%.1f) = %.1f\n",x,1.0/x);
    }
        
    return 0;
}
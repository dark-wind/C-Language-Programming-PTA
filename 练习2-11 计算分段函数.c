#include <stdio.h>
#include <math.h>
int main(){
    float x;
    scanf("%f",&x);
    if(x>=0){
        printf("f(%.2f) = %.2f\n",x,pow(x,0.5));
    }else{
        printf("f(%.2f) = %.2f\n",x,pow(x+1,2)+1.0/x+2*x);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
double fn(int n){
    if(n>1){
        return n*fn(n-1);
    }else{
        return 1.0;
    }
}
int main(){
    double x;
    double limit = 1e-5;
    double sum=1;
    double temp;
    scanf("%lf",&x);
    for(int i=1;;i++){
        temp = pow(x,i)/fn(i);
        
        
        sum+=temp;
        if(temp<limit){
            break;
        }
    }
    printf("%.4f",sum);
    return 0;
}
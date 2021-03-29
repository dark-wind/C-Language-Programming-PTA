#include <stdio.h>
int main(){
    double limit;
    scanf("%lf",&limit);
    double fenzi=1,fenmu=1;
    int sign=1;
    double sum=0;
    if(limit>=1){
        printf("sum = %.6f",fenzi);
    }else{
        while((fenzi/fenmu) >=limit){
        if(sign){
            sum=sum+fenzi/fenmu;
            sign=0;
        }else{
            sum = sum-fenzi/fenmu;
            sign=1;
        }
        fenmu=fenmu+3;
    }
    printf("sum = %.6f",sum);
    }
    
    return 0;
}
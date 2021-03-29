#include <stdio.h>
int main(){
    int n;
    double sum=0;
    int j=1;
    int sign=1;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        if(sign){
            sum = sum+ 1.0/j;
            sign=0;
        }else{
            sum=sum-1.0/j;
            sign=1;
        }
        j=j+3;
    }
    printf("sum = %.3f",sum);
    return 0;
}
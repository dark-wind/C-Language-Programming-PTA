#include <stdio.h>
double fact(int n);
int main(){
    int m,n;
    double result=0;
    scanf("%d %d",&m,&n);
    printf("result = %0.f",fact(n)/(fact(m)*fact(n-m)));
    return 0;
}
double fact(int n){
    if(n>1){
        return n*fact(n-1);
    }else{
        return 1.0;
    }
}
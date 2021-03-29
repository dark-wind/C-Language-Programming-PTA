#include <stdio.h>
double fn(int n){
    if(n>1){
        return n*fn(n-1);
    }else{
        return 1.0;
    }
}
int main(){
    int n;
    double sum=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+ (1/fn(i));
    }
    printf("%.8f",sum);
    return 0;
}
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
    double sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+= fn(i);
    }
    printf("%.0f",sum);
    return 0;
}
#include <stdio.h>
//斐波那契数列
int fib(int n){
    if(n>2){
        return fib(n-1)+fib(n-2);
    }else if(n==0){
        return 0;
    }else{
        //1 2
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int month;
    for(int i=0;;i++){
        if(fib(i)>=n){
            month = i;
            break;
        }
    }
    printf("%d",month);
    return 0;
}
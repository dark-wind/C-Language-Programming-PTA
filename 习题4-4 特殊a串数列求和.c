#include <stdio.h>
int combine(int a, int n){
     int mul=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+ a*mul;
        mul=mul*10;
    }
    return sum;
}
int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=combine(a,i);
    }
    printf("s = %d",sum);
    return 0;
}
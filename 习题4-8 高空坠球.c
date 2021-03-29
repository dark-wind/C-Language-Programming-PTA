#include <stdio.h>
int main(){
    double high,n;
    double sum;
    scanf("%lf %lf",&high,&n);
//    10 5+5 2.5+2.5
//    1   2    3
    sum=high;
    for(int i=2;i<=n;i++){
        sum+=high;
        high = high/2;
    }
    if(n!=0){
    printf("%.1f %.1f",sum,high/2);
        
    }else{
        printf("%.1f %.1f",0,0);
    }
    return 0;
}
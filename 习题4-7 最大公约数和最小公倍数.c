#include <stdio.h>
int main(){
    int m,n;
    int max,min;
    int gongyue,gongbei;
    scanf("%d %d",&m,&n);
    max = m>n?m:n;
    min = m>n?n:m;
    for(int i = min;i>0;i--){
        if(m%i==0 &&n%i==0){
            gongyue = i;
            break;
        }
    }
    for(int j=max;;j++){
        if(j%m==0 && j%n==0){
            gongbei = j;
            break;
        }
    }
    printf("%d %d",gongyue,gongbei);
    return 0;
}
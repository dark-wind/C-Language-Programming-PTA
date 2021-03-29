#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int rs;
    scanf("%d",&n);
    if(n<0){
        rs=-1;
    }
    if(n==0){
        rs=0;
    }
    if(n>0){
        rs=1;
    }
    printf("sign(%d) = %d",n,rs);
    return 0;
}
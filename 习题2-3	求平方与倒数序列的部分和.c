#include <stdio.h>
int main(){
    int m,n;
    double sum=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        sum= sum+ i*i + 1.0/i;
    }
    printf("sum = %.6f",sum);
    return 0;
}
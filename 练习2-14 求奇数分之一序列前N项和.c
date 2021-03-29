#include <stdio.h>
int main(){
    int n;
    double sum=0;
    scanf("%d",&n);
    int j=1;
    for(int i=1;i<=n;i++){
        sum+= 1.0/j;
        j=j+2;
    }
    printf("sum = %.6f",sum);
    return 0;
}
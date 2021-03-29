#include <stdio.h>
int main(){
    int num[4];
    int sum=0;
    for(int i=0;i<4;i++){
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("Sum = %d; Average = %.1f",sum,sum/4.0);
    return 0;
}
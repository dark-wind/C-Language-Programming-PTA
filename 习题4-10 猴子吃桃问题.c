#include <stdio.h>
int main(){
    int n;
    int sum;
    scanf("%d",&n);
    int i=1;
    // 暴力找j
    //i 是天数
    for(int j=1;;j++){
        sum = j;
        while(i<n){
            sum = sum/2 -1;
            i++;
        }
        if(sum==1){
            sum=j;
            break;
        }
        i=1;
    }
printf("%d",sum);
    return 0;
}
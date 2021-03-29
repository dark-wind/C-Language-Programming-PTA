#include <stdio.h>

int main(){
    int n,num;
    int max=-199999;
    int point;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(num>max){
            max = num;
            point = i;
        }
    }
    printf("%d %d",max,point);
    return 0;
}
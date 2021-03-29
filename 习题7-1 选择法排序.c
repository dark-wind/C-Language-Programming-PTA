#include <stdio.h>

int main(){
    int num[10];
    int n;
    int temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    
    for(int gap = n/2;gap>0;gap = gap/2){
        for(int i = gap;i<n;i++){
            for(int j=i-gap;j>=0 && num[j]<num[j+gap];j= j-gap){
                temp = num[j];
                num[j]=num[j+gap];
                num[j+gap]=temp;
            }
        }
    }
    int first=1;
    for(int i=0;i<n;i++){
        if(first){
            printf("%d",num[i]);
            first=0;
        }else{
            printf(" %d",num[i]);
        }
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    int temp;
    double sum=0;
    int count=0;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&temp);
        if(temp>=60){
            count++;
        }
        sum =sum+temp;
    }
    if(n!=0){
        printf("average = %.1f\n",sum/n);
        printf("count = %d",count);
    }else{
        printf("average = %.1f\n",sum);
        printf("count = %d",count);
    }
    
    
    return 0;
}
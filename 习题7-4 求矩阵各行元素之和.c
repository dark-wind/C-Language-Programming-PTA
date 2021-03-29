#include <stdio.h>

int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int sum=0;
    int temp;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            scanf("%d",&temp);
            sum+=temp;
        }
        printf("%d\n",sum);
        sum=0;
    }
    
    return 0;
}
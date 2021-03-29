#include <stdio.h>

int main(){
    int n;
    int num[10][10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&num[i][j]);
        }
    }
    int find;
    int max;
    int column;
    int j;
    int count=0;
    for(int i=0;i<n;i++){
        j=0;
        find=1;
        max=-1;
        for(;j<n;j++){
            if(num[i][j]>=max){
                max = num[i][j];
                column = j;
            }
        }
        for(int k=0;k<n;k++){
            if(num[k][column]<max){
                find=0;
                break;
            }
        }
        if(find){
            printf("%d %d\n",i,column);
            count++;
        }
    }
    if(count<1){
        printf("NONE");
    }
    
    return 0;
}
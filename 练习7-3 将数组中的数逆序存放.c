#include <stdio.h>

int main(){
    int n;
    int num[11];
    scanf("%d",&n);
    int i=0;
    int first=1;
    for(;i<n;i++){
        scanf("%d",&num[i]);
    }
    
    while(i--){
        if(first){
            printf("%d",num[i]);
            first=0;
        }else{
            printf(" %d",num[i]);
        }
    }
    return 0;
}
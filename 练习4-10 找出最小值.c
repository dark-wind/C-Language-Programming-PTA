#include <stdio.h>
int main(){
    int n;
    int min=1000000;
    int temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&temp);
        if(temp<min){
            min = temp;
        }
        
    }
    printf("min = %d",min);
    return 0;
}
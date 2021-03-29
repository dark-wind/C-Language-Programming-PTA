#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&m,&n);
    int num[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&num[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            num[i][j+m] = num[i][j];
        }
        for(int k=0;k<n;k++){
            if(k+m>=n){
                num[i][(k+m)%n]=num[i][k+m];
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
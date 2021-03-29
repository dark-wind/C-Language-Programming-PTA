#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num[100][100];
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&num[i][j]);
            sum+=num[i][j];
        }
    }
    // 减去最后一列
    for(int i=1;i<=n;i++){
        sum-=num[i][n];
    }
    // 减去最后一行
    for(int i=1;i<n;i++){
        sum-=num[n][i];
    }
    for(int i=2;i<n;i++){
            sum-=num[i][n-i+1];
    }
    printf("%d",sum);
    return 0;
}
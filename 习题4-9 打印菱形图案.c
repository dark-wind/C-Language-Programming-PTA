#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    //6 4 2
    int i=1;
    for(;i<=(n/2)+1;i++){
        for(int j=1;j<=n-(2*i)+1;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    i=i-2;
    for(;i>0;i--){
        for(int j=1;j<=n-(2*i)+1;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
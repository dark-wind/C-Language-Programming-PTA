#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int count=0;
    int sum=0;
    int prime=1;
    for(int i=m;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1 && i!=1){
                count++;
            sum+=i;
            }else{
            prime=1;
        }
            
    }
    printf("%d %d",count,sum);
    return 0;
}
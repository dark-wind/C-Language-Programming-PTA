#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double fenzi=2,fenmu=1;
    double sum=0,temp;
    for(int i=0;i<n;i++){
        sum+= fenzi/fenmu;
        temp = fenzi+fenmu;
        fenmu=fenzi ;
        fenzi = temp;
    }
    printf("%.2f",sum);
    return 0;
}
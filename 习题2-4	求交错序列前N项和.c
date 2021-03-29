#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double fenzi=1.0;
    double fenmu = 1.0;
    int sign=1;
    double sum=0;
    for(int i=1;i<=n;i++){
        if(sign){
            sum = sum + fenzi/fenmu;
            sign=0;
        }else{
            sum = sum- fenzi/fenmu;
            sign=1;
        }
        fenzi++;
        fenmu= fenmu +2;
    }
    printf("%.3f",sum);
    return 0;
}
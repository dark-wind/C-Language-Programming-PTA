#include <stdio.h>
int pow(int j,int k)
{
    int t=j;
    for(int l=1;l<k;l++)
    {
        j*=t;
    }
    return j;
}
int main(){
    int n;
    int ge,shi,bai,qian,wan,shiwan,baiwan;
    scanf("%d",&n);
    if(n==3){
        for(int i =100;i<=999;i++){
            ge = i%10;
            shi = (i/10)%10;
            bai = i/100;
            if(pow(ge,n) +pow(bai,n) + pow(shi,n) == i){
                printf("%d\n",i);
            }
        }
    }
    if(n==4){
        for(int i =1000;i<=9999;i++){
            ge = i%10;
            shi = (i/10)%10;
            bai = (i/100)%10;
            qian = i/1000;
            if(pow(ge,n) +pow(bai,n) + pow(shi,n) + pow(qian,n) == i){
                printf("%d\n",i);
            }
        }
    }
    if(n==5){
        for(int i =10000;i<=99999;i++){
           ge = i%10;
            shi = (i/10)%10;
            bai = (i/100)%10;
            qian = (i/1000)%10;
            wan = i/10000;
            if(pow(ge,n) +pow(bai,n) + pow(shi,n)+pow(qian,n)+pow(wan,n) == i){
                printf("%d\n",i);
            }
        }
    }
    if(n==6){
        for(int i =100000;i<=999999;i++){
            ge = i%10;
            shi = (i/10)%10;
            bai = (i/100)%10;
            qian = (i/1000)%10;
            wan = (i/10000)%10;
            shiwan = i/100000;
            if(pow(ge,n) +pow(bai,n) + pow(shi,n)+pow(qian,n)+pow(wan,n)+pow(shiwan,n) == i){
                printf("%d\n",i);
            }
        }
    }
    if(n==7){
        for(int i =1000000;i<=9999999;i++){
            ge = i%10;
            shi = (i/10)%10;
            bai = (i/100)%10;
            qian = (i/1000)%10;
            wan = (i/10000)%10;
            shiwan = (i/100000)%10;
            baiwan = i/1000000;
            if(pow(ge,n) +pow(bai,n) + pow(shi,n)+pow(qian,n)+pow(wan,n)+pow(shiwan,n)+pow(baiwan,n) == i){
                printf("%d\n",i);
            }
        }
    }
    
    return 0;
}
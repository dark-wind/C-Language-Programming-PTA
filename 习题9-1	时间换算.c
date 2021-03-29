#include <stdio.h>

int main(){
    int hour,min,second;
    int past;
    int sum=0;
    scanf("%d:%d:%d",&hour,&min,&second);
    scanf("%d",&past);
    sum = hour*3600+min*60+second + past;
    if(sum>=86400){
        sum-=86400;
    }
    hour  =sum/3600;
    sum = sum-hour*3600;
    min = sum/60;
    sum-=min*60;
    second = sum;
    if(hour<10){
        printf("0%d:",hour);
    }else{
        printf("%d:",hour);
    }
    if(min<10){
        printf("0%d:",min);
    }else{
        printf("%d:",min);
    }
    if(second<10){
        printf("0%d",second);
    }else{
        printf("%d",second);
    }
    return 0;
}
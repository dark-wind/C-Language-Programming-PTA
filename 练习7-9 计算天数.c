#include <stdio.h>

int main(){
    int year,month,day;
    scanf("%d/%d/%d",&year,&month,&day);
    int run,count=0;
    if((year %4==0 &&year%100!=0)||year %400==0){
        run=1;
    }else{
        run =0;
    }
    //1   2  3  4  5  6
    //31 28 31  30 31 30
    //   30
    month = month-1;
    if(month>1){
        if(month%2==0){
            count = month/2*61;
        }else{
            count = 31+ (month-1)/2*61;
        }
        if(run){
            count-=1;
        }else{
            count-=2;
        }
    }
    
    count+=day;
    printf("%d",count);
    return 0;
}
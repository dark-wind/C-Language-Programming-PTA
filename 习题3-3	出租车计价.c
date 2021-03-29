#include <stdio.h>
int main(){
    float distance;
    int wait;
    float money=0;
    scanf("%f %d",&distance,&wait);
    if(wait>=5){
        money = money + wait/5*2;
    }
    if(distance<=3){
        money = money+10;
    }
    if(distance>3 &&distance<=10){
        money = money+10+(distance-3)*2;
    }
    
    if(distance>10){
        money = money +10 +14+ (distance-10)*3;
    }
    money  = (int)money;
    printf("%.f",money+0.5);
    return 0;
}
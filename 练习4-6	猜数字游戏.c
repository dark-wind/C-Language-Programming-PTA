#include <stdio.h>
int main(){
    int answer,N;
    int temp;
    scanf("%d %d",&answer,&N);
    int sign=0;
    int gus=0;
    for(int i=1;i<=N;i++){
        scanf("%d",&temp);
        if(temp<0){
            gus=1;
            printf("Game Over");
            break;
        }
        if(temp>answer){
            printf("Too big\n");
            sign++;
        }else if(temp<answer){
            printf("Too small\n");
            sign++;
        }else{
            sign++;
            if(sign==1){
                printf("Bingo!");
            }else if(sign>1&& sign<=3){
                printf("Lucky You!");
            }else if(sign>3){
                printf("Good Guess!");
            }
            gus=1;
            break;
        }
    }
    if(!gus){
            printf("Game Over");
        
    }
    return 0;
}
#include <stdio.h>
int main(){
    float  use,cost;
    scanf("%f",&use);
    if(use<0){
        printf("Invalid Value!\n");
    }else{
        if(use<=50){
            cost = 0.53*use;
        }
        if(use>50){
            cost = 50*0.53 + (use-50)*0.58;
        }
        printf("cost = %.2f\n",cost);
    }
    return 0;
}
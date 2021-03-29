#include <stdio.h>
int main(){
    int lower,upper;
    scanf("%d %d",&lower,&upper);
    if(lower<=upper && upper<=100 &&lower<=100){
        printf("fahr celsius\n");
        for(int i=lower;i<=upper;i=i+2){
            printf("%d%6.1f\n",i,5.0*(i-32)/9.0);
        }
    }else{
        printf("Invalid.\n");
    }
    return 0;
}
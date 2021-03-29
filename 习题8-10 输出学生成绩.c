#include <stdio.h>

int main(){
    int n;
    double max,min;
    double grade;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&grade);
        if(i==0){
            max = grade;
            min = grade;
        }else{
            if(grade>max){
                max = grade;
            }
            if(grade<min){
                min = grade;
            }
        }        
        sum+=grade;
    }
    printf("average = %.2f\n",sum*1.0/n);
    printf("max = %.2f\n",max);
    printf("min = %.2f\n",min);
    
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=90){
        printf("A");
    }
    if(n>=80 &&n<90){
        printf("B");
    }
    if(n>=70 && n<80){
        printf("C");
    }
    if(n>=60&& n<70){
        printf("D");
    }
    if(n<60){
        printf("E");
    }
    return 0;
}
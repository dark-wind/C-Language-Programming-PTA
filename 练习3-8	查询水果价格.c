#include <stdio.h>
void show(){
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");
}
int main(){
    int n=1;
    int count=0;
    show();
    while(n!=0){
        scanf("%d",&n);
        if(count==5 || n==0){
            break;
        }
        if(n==1){
            printf("price = 3.00\n");
        }else
        if(n==2){
            printf("price = 2.50\n");
        }else
        if(n==3){
            printf("price = 4.10\n");
        }else
        if(n==4){
            printf("price = 10.20\n");
        }else{
            printf("price = 0.00\n");
            
        }
        count++;
        
        
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    int count[10]={0};
    char num[10];
    char temp;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        for(int j=0;;j++){
            scanf("%c",&temp);
            if(temp==' ' || temp=='\n'){
                break;
            }
            temp = (int)temp-48;
            count[temp]++;
        }
    }
    int max=-1,max_point;
    for(int i=0;i<10;i++){
        if(count[i]>=max){
            max = count[i];
            max_point=i;
        }
    }
    printf("%d:",max);
    for(int i=0;i<10;i++){
        if(count[i]==max){
            printf(" %d",i);
        }
    }
    return 0;
}
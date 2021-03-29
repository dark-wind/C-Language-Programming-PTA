#include <stdio.h>
#include <string.h>
int main(){
    char str[5][100];
    char temp[100];
    for(int i=0;i<5;i++){
        scanf("%s",str[i]);
    }
    int n=5;
    for(int gap=5/2;gap>0;gap=gap/2){
        for(int i =gap;i<n;i++){
            for(int j = i-gap;j>=0 && str[j][0]>str[j+gap][0];j = j-gap ){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+gap]);
                strcpy(str[j+gap],temp);
            }
        }
    }
    printf("After sorted:\n");
    for(int i=0;i<5;i++){
        printf("%s\n",str[i]);
    }
    
    return 0;
}
#include <stdio.h>

int main(){
    int count=0;
    char str;
    while(1){
        scanf("%c",&str);
        if(str=='\n'){
            break;
        }
        if(str>='A' && str<='Z'){
            
            if(str=='A' || str=='E' ||str=='I' ||str=='O' ||str=='U' ){
            
            }else{
                count++;
            }
        }
        
        
    }
    printf("%d",count);
    return 0;
}
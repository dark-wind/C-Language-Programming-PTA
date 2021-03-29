#include <stdio.h>

int main(){
    char str;
    while(1){
        scanf("%c",&str);
        if(str=='\n'){
            break;
        }
        if(str>='A' && str<='Z'){
            printf("%c",(155-(int)str));
        }else{
            printf("%c",str);
        }
        
    }
    
    return 0;
}
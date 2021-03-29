#include <stdio.h>

int main(){
    int letter=0,blank=0,digit=0,other=0;
    char input;
    for(int i=1;i<=10;i++){
        scanf("%c",&input);
        if(input>='A' && input <='Z'){
            letter++;
        }else
        if(input>='a' && input <='z'){
            letter++;
        }else
        if(input>='0' && input <='9'){
            digit++;
        }else
        if(input==' ' || input =='\n'){
            blank++;
        }else{
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    char temp;
    int sign=1;//表示正
    int num=0;//没有找到数字或者a-f
    int k=0;
    int filter[10]={0};
    int sum=0;
    for(int i=0;;i++){
        
        scanf("%c",&temp);
        if(temp=='#'){
            break;
        }
        if((temp >='0' && temp<='9') || (temp>='A' && temp<='F') || (temp>='a' && temp<='f')){
            num=1;
            if(temp >='0' && temp<='9'){
                filter[k]=(int)temp-48;
            }
            if(temp=='A' || temp =='a'){
                filter[k]=10;
            }
            if(temp=='B' || temp =='b'){
                filter[k]=11;
            }
            if(temp=='C' || temp =='c'){
                filter[k]=12;
            }
            if(temp=='D' || temp =='d'){
                filter[k]=13;
            }
            if(temp=='E' || temp =='e'){
                filter[k]=14;
            }
            if(temp=='F' || temp =='f'){
                filter[k]=15;
            }
            k++;
        }
        if(temp=='-' && num==0){
            sign=0;
        }
        
    }
    // A B C D E F
//    - 15 4 1
//        1+4*16+15*16*16
    int mul=0;
    while(k--){
        sum+=filter[k]*pow(16,mul);
        mul++;
    }
    if(sum!=0 && sign==0){
        printf("-");
    }
    printf("%d",sum);
    return 0;
}
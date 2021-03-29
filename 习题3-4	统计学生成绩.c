#include <stdio.h>
int main(){
    int n;
    int A_count=0,B_count=0,C_count=0,D_count=0,E_count=0;
    scanf("%d",&n);
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        
        if(temp>=90){
            A_count++;
        }
        if(temp>=80 && temp <90){
            B_count++;
        }
        if(temp>=70&& temp <80){
            C_count++;
        }
        if(temp>=60 && temp<70){
            D_count++;
        }
        if(temp<60){
            E_count++;
        }
    }
    printf("%d %d %d %d %d",A_count,B_count,C_count,D_count,E_count);
    return 0;
}
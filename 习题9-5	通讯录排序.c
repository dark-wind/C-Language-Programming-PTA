#include <stdio.h>
#include <string.h>
typedef struct friend{
    char name[100];
    int  birth;
    char phone[200];
}friend;
int main(){
    int n;
    scanf("%d",&n);
    friend people[n];
    friend temp;
    for(int i=0;i<n;i++){
        scanf("%s",people[i].name);
        scanf("%d",&people[i].birth);
        scanf("%s",people[i].phone);
    }
    for(int gap = n/2;gap>0;gap=gap/2){
        for (int i=gap;i<n;i++){
            for(int j = i-gap; j>=0 && people[j].birth >people[j+gap].birth;j=j-gap){
                strcpy(temp.name,people[j].name);
                strcpy(temp.phone,people[j].phone);
                temp.birth = people[j].birth;
                
                strcpy(people[j].name,people[j+gap].name);
                strcpy(people[j].phone,people[j+gap].phone);
                 people[j].birth = people[j+gap].birth;
                
                strcpy(people[j+gap].name,temp.name);
                strcpy(people[j+gap].phone,temp.phone);
                 people[j+gap].birth = temp.birth;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s %d %s\n",people[i].name,people[i].birth,people[i].phone);
    }
    
    return 0;
}
#include <stdio.h>

int main(){
    int n1,n2;
    int arr1[100],arr2[100];
    int print[100];
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
     scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int same=0;
    int first=1;
    int l=0;
    for(int i=0;i<n1;i++){
        if(arr1[i]==0){
            int e=1;
        }
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                same=1;
                break;
            }
        }
        for(int k=0;k<l;k++){
            if(arr1[i]==print[k]){
                same=1;
            }
        }
        if(first){
            if(!same){
                printf("%d",arr1[i]);
                print[l]=arr1[i];
                l++;
                first=0;
            }
        }else{
            if(!same){
                printf(" %d",arr1[i]);
                print[l]=arr1[i];
                l++;
            }
        }
        same=0;
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n1;j++){
            if(arr2[i]==arr1[j]){
                same=1;
                break;
            }
        }
        for(int k=0;k<l;k++){
            if(arr2[i]==print[k]){
                same=1;
            }
        }
        if(first){
            if(!same){
                printf("%d",arr2[i]);
                print[l]=arr2[i];
                l++;
                first=0;
            }
        }else{
            if(!same){
                printf(" %d",arr2[i]);
                print[l]=arr2[i];
                l++;
            }
        }
        same=0;
    }
    return 0;
}
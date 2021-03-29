int factorsum( int number ){
    int sum=0;
    
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
        return sum;
}
void PrintPN( int m, int n ){
    int count=0;
    int first=1;
    for(int i =m;i<=n;i++){
        if(factorsum(i)==i){
            printf("%d =",i);
            for(int j=1;j<i;j++){
                if(i%j==0){
                    if(first){
                        printf(" %d",j);
                        first=0;
                    }else{
                        printf(" + %d",j);
                    }
                }
            }
            first=1;
            printf("\n");
            count++;
        }
    }
    
    if(count==0){
        printf("No perfect number");
    }
}
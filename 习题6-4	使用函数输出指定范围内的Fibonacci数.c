int fib( int n ){
    int f1=1,f2=1;
    int count=2;
    if(n==1 ||n==2){
        return 1;
    }
    for(int i=2;;i++){
        if(i==(f1+f2)){
            f1=f2;
            f2=i;
            count++;
            if(count==n){
                return i;
            }
        }
    }
}
void PrintFN( int m, int n ){
    int temp;
    int count=0;
    int first=1;
    for(int i=1;i<=40;i++){
        temp = fib(i);
        if(temp>=m && temp<=n){
            if(first){
                printf("%d",temp);
                first=0;
            }else{
                printf(" %d",temp);
                
            }
            count++;
        }
    }
    if(count==0){
        printf("No Fibonacci number");
    }
}
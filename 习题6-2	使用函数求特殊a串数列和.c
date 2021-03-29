int fn( int a, int n ){
    int temp=a;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=temp;
        temp=temp*10;
    }
    return sum;
}
int SumA( int a, int n ){
    int temp;
    int sum=0;
    for(int i=0;i<=n;i++){
        temp=fn(a,i);
        sum+=temp;
    }
    return sum;
}
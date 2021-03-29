double fact( int n ){
    if(n>1){
        return n*fact(n-1);
    }else{
        return 1;
    }
}
double factsum( int n ){
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=fact(i);
    }
    return sum;
}
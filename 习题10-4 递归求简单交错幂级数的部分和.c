double fn( double x, int n ){
// n=2   x+ (-x)*(-x)
    
// n=3   x+（-x)*fn(x,2)
    if(n>1){
        return x+(-x)*fn(x,n-1);
    }else{
        return x;
    }
}
void dectobin( int n ){
        //10
        //5 -0
        //2 -1
        //1-0
        if(n<=1){
            printf("%d",n);
        }else{
            dectobin(n/2);
            printf("%d",n%2);
        }
}
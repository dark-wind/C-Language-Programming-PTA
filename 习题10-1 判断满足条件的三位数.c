int search( int n ){
    int ge,shi,bai;
    int num;
    int count=0;
    for(int i=11;i<33;i++){
        num = i*i;
        ge = num%10;
        num=num/10;
        shi= num%10;
        bai = num/10;
        if(ge==shi ||shi==bai || ge==bai){
            if(i*i>=101 && i*i<=n){

               count++; 
            }
            
        }
    }
    return count;
}
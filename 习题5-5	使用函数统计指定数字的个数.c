int CountDigit( int number, int digit ){
    int count=0;
    int temp;
    if(number<0){
        number=0-number;
    }
    while(number>10){
        temp=number%10;
        if(temp==digit){
            count++;
            
        }
        number=number/10;
    }
     if(number==digit){
            count++;
    }
    return count;
}
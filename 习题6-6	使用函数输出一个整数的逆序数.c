int reverse( int number ){
    int num[10];
    int fu=0;
    int sum=0;
    if(number<0){
        fu=1;
        number=0-number;
    }
    int temp;
    temp = number%10;
    while(number>0){
        temp = number%10;
        if(temp ==0){
            number=number/10;
        }else{
            break;
        }
    }
    int i=0;
    while(number>10){
        temp = number%10;
        number=number/10;
        num[i]=temp;
        i++;
    }
    int k=i;
    // 计算最高位
    temp=1;
    while(i>0){
        temp=temp*10;
        i--;
    }
    for(i=0;i<k;i++){
        sum+= num[i]*temp;
        temp=temp/10;
    }    
    sum=sum+number;
    if(fu){
        sum=0-sum;
    }

    return sum;
}
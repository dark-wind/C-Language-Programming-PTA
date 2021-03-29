bool palindrome( char *s ){
    char temp[100];
    int length=0;
    int i=0;
    while(s[length]!='\0'){
        length++;
    }
    length--;
    while(length>=0){
        temp[i]=s[length];
        i++;
        length--;
    }
    temp[i]='\0';
    i=0;
    int same=1;
    while(s[i]!='\0'){
        if(s[i]!=temp[i]){
            same=0;
            break;
        }
        i++;
    }
    return same?true:false;
}
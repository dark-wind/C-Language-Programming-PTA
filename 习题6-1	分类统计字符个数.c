void StringCount( char s[] ){
    int letter = 0, blank = 0, digit = 0, other=0;
    int i=0;
    while(s[i]!='\0'){

        if(s[i]>='a' && s[i]<='z'){
            letter++;

        }else
        if(s[i]>='A' && s[i]<='Z'){
            letter++;

        }else
        if(s[i]==' ' || s[i]=='\n'){
            blank++;
        }else
        if(s[i]>='0' && s[i]<='9'){
            digit++;
        }else{
            other++;
        }
        i++;

    }
   
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}
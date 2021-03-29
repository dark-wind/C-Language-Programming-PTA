void StringCount( char *s ){
        int big_letter = 0, small_letter=0,blank = 0, digit = 0, other=0;
    int i=0;
    while(s[i]!='\0'){

        if(s[i]>='a' && s[i]<='z'){
            small_letter++;

        }else
        if(s[i]>='A' && s[i]<='Z'){
            big_letter++;

        }else
        if(s[i]==' '){
            blank++;
        }else
        if(s[i]>='0' && s[i]<='9'){
            digit++;
        }else{
            other++;
        }
        i++;

    }
   
    printf("%d %d %d %d %d",big_letter,small_letter,blank,digit,other);
}
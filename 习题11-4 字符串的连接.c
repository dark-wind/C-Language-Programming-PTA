char *str_cat( char *s, char *t ){
    int i=0,j=0;
    while(s[i]!='\0'){
        i++;
    }
    while(t[j]!='\0'){
        s[i]=t[j];
        i++;
        j++;
    }
    return s;
}
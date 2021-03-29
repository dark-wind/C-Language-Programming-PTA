void strmcpy( char *t, int m, char *s ){
    //统计原字符串的长度
    int length=1;
    int i=0;
    while(t[i]!='\0'){
        length++;
        i++;
        if(length>20){
            //t[20]='\0';
            //break;
        }
    }
    int k=0;
    for(int j=m-1;j<length;j++){
        s[k]=t[j];
        k++;
    }
    s[k] = '\0';

}
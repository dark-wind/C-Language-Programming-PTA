int max_len( char *s[], int n ){
    int length=0,max=0;
    int j=0;
    for(int i=0;i<n;i++){
        while(s[i][j]!='\0'){
            length++;
            j++;
        }
        if(length>max){
            max=length;
        }
        length=0;
        j=0;
    }
    return max;
}
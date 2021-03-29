void Shift( char s[] ){
    int k=3;
    char a,b,c;
    a=s[0];
    b=s[1];
    c=s[2];
    while(s[k]!='\0'){
        s[k-3]=s[k];
        k++;
    }
    s[k-3]=a;
    s[k-2]=b;
    s[k-1]=c;

}   
void delchar( char *str, char c ){
    char temp[100];
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        if(str[i]!=c){
            temp[j]=str[i];
            j++;
        }
        i++;
    }
    temp[j]='\0';
    for(j=0;j<i;j++){
        str[j]='\0';
    }
    i=0;
    
    while(temp[i]!='\0'){
        str[i]=temp[i];
        i++;
    }
}
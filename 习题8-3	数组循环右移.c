int ArrayShift( int a[], int n, int m ){
    int collage[1000];
    if(m>n){
        m = m%n;
    }
    for(int j=0;j<m;j++){
        collage[j]=a[n-m+j];
    }
    for(int i=n-1;i>=m;i--){
        a[i]=a[i-m];
    }
    
    for(int k=0;k<m;k++){
        a[k]=collage[k];
    }
    return 1;
}
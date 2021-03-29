void CountOff( int n, int m, int out[] ){
//    0 1 2 3 4 5 6 7 8 9 10 
//    1 2 3 1 2 3 1 2 3 1  2
//        1     2     3     
//    3 1   2 3
//    4       5
    int count=0;
    int order=1;//计算剩余人数
    int current=-1;//记录当前坐标
    for(int i=0;i<n;i++){
        out[i]=-1;
    }
    while(order <=n){
        current++;
        if(current==n){
            current=0;
        }
        if(out[current]==-1){
            count++;
        }
        if(count==m){
            out[current]=order;
            order++;
            count=0;
        }
    }
}
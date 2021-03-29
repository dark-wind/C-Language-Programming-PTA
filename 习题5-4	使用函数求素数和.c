int prime(int p)
{
    if (p <= 0)
    {
        return 0;
    }
    if (p == 2 || p == 3)
    {
        return 1;
    }
    if (p == 1)
    {
        return 0;
    }
    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int PrimeSum( int m, int n ){
    int sum=0;
    for(int i=m;i<=n;i++){
        if(prime(i)){
            sum+=i;
        }
    }
    return sum;
}
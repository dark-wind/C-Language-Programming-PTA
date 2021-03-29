double fn(int n)
{
    if (n > 1)
    {
        return n * fn(n - 1);
    }
    else
    {
        return 1.0;
    }
}
double funcos(double e, double x)
{
    double last;
    double sum = 0;
    int sign = 1;
    for (int i = 0;; i = i + 2)
    {
        last = pow(x, i) / fn(i);

        if (sign)
        {
            sum += last;
            sign = 0;
        }
        else
        {
            sum -= last;
            sign = 1;
        }
        if (last < e)
        {
            break;
        }
    }
    return sum;
}
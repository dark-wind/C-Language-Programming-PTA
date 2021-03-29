int narcissistic(int number)
{
    int scale;
    int copy = number;
    if (number >= 100 && number < 1000)
    {
        scale = 3;
    }
    else if (number >= 1000 && number < 10000)
    {
        scale = 4;
    }
    else
    {
        return 0;
    }
    int ge, shi, bai, qian;
    ge = number % 10;
    number = number / 10;
    shi = number % 10;
    number = number / 10;
    if (scale == 3)
    {
        bai = number;
        if (shi * shi * shi + bai * bai * bai + ge * ge * ge == copy)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        bai = number % 10;
        number = number / 10;
        qian = number;
        if (shi * shi * shi * shi + bai * bai * bai * bai + ge * ge * ge * ge + qian * qian * qian * qian == copy)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
void PrintN(int m, int n)
{
    for (int i = m + 1; i < n; i++)
    {
        if (narcissistic(i))
        {
            printf("%d\n", i);
        }
    }
}
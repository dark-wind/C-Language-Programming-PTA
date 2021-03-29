#include <stdio.h>

int main()
{
    int n;
    int guimo;
    int temp;
    int sign;
    scanf("%d", &n);
    for (int juzhen = 0; juzhen < n; juzhen++)
    {
        scanf("%d", &guimo);
        sign = 1;
        for (int i = 0; i < guimo; i++)
        {
            for (int j = 0; j < guimo; j++)
            {
                scanf("%d", &temp);
                //(i,j) 如果i>j 下三角必为零
                if (i > j && temp != 0)
                {
                    sign = 0;
                }
            }
        }
        if (sign)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
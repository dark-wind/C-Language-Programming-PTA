#include <stdio.h>

int main()
{
    int n;
    char temp;
    scanf("%d", &n);
    getchar();
    double price[n];
    char names[n][50];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;; j++)
        {
            scanf("%c", &temp);
            if (temp == '\n')
            {
                names[i][j] = '\0';
                break;
            }
            names[i][j] = temp;
        }
        scanf("%lf", &price[i]);
        getchar();
    }
    double max, min;
    int max_point = 0, min_point = 0;
    max = price[0];
    min = price[0];
    for (int j = 0; j < n; j++)
    {
        if (max <= price[j])
        {
            max = price[j];
            max_point = j;
        }
        if (min >= price[j])
        {
            min = price[j];
            min_point = j;
        }
    }
    printf("%.2f, %s\n", max, names[max_point]);
    printf("%.2f, %s\n", min, names[min_point]);

    return 0;
}
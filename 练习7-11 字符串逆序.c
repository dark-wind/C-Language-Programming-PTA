#include <stdio.h>

int main()
{
    char s[100];
    char temp;
    int i = 0;
    while (1)
    {
        scanf("%c", &temp);
        if (temp == '\n')
        {
            break;
        }
        else
        {
            s[i] = temp;
        }
        i++;
    }
    while (i--)
    {
        printf("%c", s[i]);
    }
    return 0;
}
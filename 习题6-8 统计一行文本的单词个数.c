#include <stdio.h>
int main()
{
    int count = 0;
    int start = 0;
    int find = 0;
    char c;
    for (int i = 0;; i++)
    {
        scanf("%c", &c);
        if ((c == ' ' ||  c == '\n') && start == 1)
        {
            count++;
            start = 0;
            if (c == '\n')
            {
                break;
            }
        }
        else if (c == ' ' && start == 0)
        {
        }
        else
        {
            start = 1;
            find = 1;
        }
        if(c == '\n'){
            break;
        }
    }
    printf("%d", count);

    return 0;
}
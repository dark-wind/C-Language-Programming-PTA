#include <stdio.h>

int main()
{
    char aim;
    char str;
    scanf("%c", &aim);
    getchar();//吸收一个回车
    int i = 0;
    int sign = -1;
    while (1)
    {
        scanf("%c", &str);
        if(str == '\n'){
            break;
        }
        if (str == aim)
        {
            sign = i;
        }
        i++;
    }
    if (sign >= 0)
    {
        printf("index = %d", sign);
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}
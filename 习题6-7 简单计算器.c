#include <stdio.h>
int main()
{
    char input_c;
    int input_num;
    scanf("%d", &input_num);
    int sum = input_num;
    int sign = 0;
    while (1)
    {
        if (sign > 0)
        {
            scanf("%d", &input_num);
            if (input_c == '+')
            {
                sum += input_num;
            }
            if (input_c == '-')
            {
                sum -= input_num;
            }
            if (input_c == '*')
            {
                sum *= input_num;
            }
            if (input_c == '/')
            {
                if (input_num == 0)
                {
                    printf("ERROR\n");
                    break;
                }
                else
                {
                    sum /= input_num;
                }
            }
            sign=0;
        }
        else
        {
            scanf("%c", &input_c);
            if (input_c == '=')
            {
                printf("%d", sum);
                break;
            }
            else if (input_c == '+' || input_c == '-' || input_c == '*' || input_c == '/')
            {
                sign = 1;
                continue;
            }
            else
            {
                printf("ERROR\n");
                break;
            }
        }
    }

    return 0;
}
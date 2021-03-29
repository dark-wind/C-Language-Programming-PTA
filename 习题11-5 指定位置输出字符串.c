char *match(char *s, char ch1, char ch2)
{
    int length = strlen(s);
    int start = -1;
    int end = -1;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ch1 && start<0)
        {
            start = i;
        }
        
        if(start>=0){
            printf("%c",s[i]);
        }
        if (s[i] == ch2 && start >= 0)
        {
            end = i;
            break;
        }
        i++;
    }
    printf("\n");
    if (start < 0)
    {
        return s+length;
    }
    else
    {
        return s + start;
    }
}
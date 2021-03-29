char *search(char *s, char *t)
{
    int match = 0;
    int start = -1;
    int length = 0;
    while (t[length] != '\0')
    {
        length++;
    }
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == t[0])
        {
            match = 1;
            int j;
            for (j = 0; j < length; j++)
            {
                if (s[i] == '\0' && j != length)
                {
                    match = 0;
                    break;
                }
                if (s[i + j] != t[j])
                {
                    match = 0;
                    break;
                }
            }
            if(match){
                start = i;
                break;
            }
        }
        i++;
    }
    if (match)
    {
        return s + start;
    }
    else
    {
        return NULL;
    }
}
#ifdef __STRING_H_
#define __STRING_H_

int compare_string (const char *str_1, const char *str_2)
{
    int i = 0;
    int check = 1;

    while ((str_1[i]!='\0')&&(str_2[i]!='\0'))
    {
        if(str_1[i]!=str_2[i])
        {
            check=0;
            break;
        }
        i++;
    }
    return check;
}

void copy_string(char *dest, char *src)
{
    int i=0;
    while (src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';

}

int str_len(char *str)
{
    int len=0;
    while (str[len]!='\0')
    {
        len++;
    }
    
    return len;
}

int my_atoi(char *str)
{
    int i=0;
    int sign = 1;
    int result=0;
    if(str[i]=='-')
    {
        sign=-1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result*sign;
    
}

#endif

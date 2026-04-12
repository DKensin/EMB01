/**
 * @brief: This function used to compare str1 with str2
 * @param str_1: pointer to first string will be compared
 * @param str_2: pointer to second string will be compared
 * @return: 0 or 1
    0: defference
    1: same
 */
int compare_string (const char *str_1, const char *str_2)
{
    int i = 0;
    int check = 1;

    if(str_1!=NULL && str_2!=NULL)
    {
        while ((str_1[i]!='\0')&&(str_2[i]!='\0'))
        {
            if(str_1[i]!=str_2[i])
            {
                check=0;
                break;
            }
            i++;
        }
    }
    else
        check=0;
    return check;
    
}

/**
 * @brief: This function used to copy content from a string to other string
 * @param src: pointer to string copy from
 * @param dest: pointer to string will be copied to
 * @return: pointer point destination string
 */
char *copy_string(char *dest, const char *src)
{
    int i;
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int min;
    char *p=NULL;

    if(dest != NULL && src != NULL)
    {
        dest_len=str_len(dest);
        src_len=str_len(src);
        if(dest_len<src_len)    min=dest_len;
        else    min=src_len;

        for(i=0; i<min; i++)
        {
            dest[i]=src[i];
        }
        dest[min]='\0';
        p=dest;
    }
    return p;
}

/**
 * @brief: This function used to determine length of a string
 * @param str: pointer to string
 * @return: Length of string - 0: if NULL
 */
int str_len(char *str)
{
    int len=0;
    if(str != NULL)
    {
        while (str[len]!='\0')
        {
            len++;
        }
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

/**
 * @brief: This function used to appen content from a string to other string
 * @param src: pointer to string will be coppied
 * @param dest: pointer to string will be appended to the end
 * @param buf_size: size of dest string was static allocated
 * @return: pointer point destination string
 */
char *my_str_concatenate(char *dest, const char *src, unsigned int buf_size)
{
    unsigned int dest_len = my_str_len(dest);
    unsigned int src_len = my_str_len(src);
    unsigned int len = dest_len + src_len;
    unsigned int min;
    char *p = NULL;
    int i;

    if ((src != NULL) && (dest != NULL))
    {
        p = dest;

        if (dest_len < buf_size)
        {
            if(buf_size<len)    min=buf_size;
            else min=len;

            for (i = dest_len; i < min; i++)
            {
                dest[i] = src[i-dest_len];
            }
            dest[min] = '\0';
        }
    }

    return p;
}


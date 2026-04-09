#define NULL        ((void *)0)

/**
 * @brief: This function used to determine length of a string
 * @param str: pointer to string
 * @return: Length of string - 0: if NULL
 */
unsigned int my_str_len(char *str)
{
    unsigned int len = 0;

    if(str != NULL)
    {
        while (*str != '\0')
        {
            len++;
        }
        
    };

    return len;
}

/**
 * @brief: This function used to copy content from a string to other string
 * @param src: pointer to string copy from
 * @param dest: pointer to string will be copied to
 * @return: pointer point destination string
 */
char *my_str_copy(char *src, char *dest)
{
    char *p = NULL;
    int i;

    if((src != NULL) && (dest != NULL))
    {
        p = dest;
        for(i = 0; src[i] != '\0'; i++)
        {
            dest[i] = src[i];
        }
        dest[i] = '\0';
    }

    return p;
}
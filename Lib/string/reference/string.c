#define NULL        ((void *)0)

/**
 * @brief: This function used to determine length of a string
 * @param str: pointer to string
 * @return: Length of string - 0: if NULL
 */
unsigned int my_str_len(const char *str)
{
    unsigned int len  = 0;

    if (str != NULL)
    {
        while (*str != '\0')
        {
            len++;
            str++;
        }
    }

    return len;
}

/**
 * @brief: This function used to copy content from a string to other string
 * @param src: pointer to string copy from
 * @param dest: pointer to string will be copied to
 * @return: pointer point destiation string
 */
char *my_str_copy(char *dest, const char *src)
{
    unsigned int dest_len;
    unsigned int src_len;
    char *p = NULL;
    int i;

    if ((src != NULL) && (dest != NULL))
    {
        p = dest;
        dest_len = my_str_len(dest);
        src_len = my_str_len(src);

        if (dest_len > src_len)
        {
            for (i = 0; i < src_len; i++)
            {
                dest[i] = src[i];
            }
            dest[src_len] = '\0';
        }
        else
        {

        }
    }

    return p;
}
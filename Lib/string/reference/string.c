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
 * @return: pointer point destination string
 */
char *my_str_copy(char *dest, const char *src)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int min;
    char *p = NULL;
    int i;

    if ((src != NULL) && (dest != NULL))
    {
        p = dest;
        dest_len = my_str_len(dest);
        src_len = my_str_len(src);
        min = (src_len < dest_len) ? (src_len) : (dest_len);

        for (i = 0; i < min; i++)
        {
            dest[i] = src[i];
        }
        dest[min] = '\0';
    }

    return p;
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
            min = (buf_size < len) ? (buf_size) : (len);

            for (i = dest_len; i < min; i++)
            {
                dest[i] = src[i-dest_len];
            }
            dest[min] = '\0';
        }
    }

    return p;
}
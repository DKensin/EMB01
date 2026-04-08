#include <stdio.h>

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
    char *p = NULL;
    int i;

    if ((src != NULL) && (dest != NULL))
    {
        p = dest;
        dest_len = my_str_len(dest);
        src_len = my_str_len(src);

        if (src_len < dest_len)
        {
            for (i = 0; i < src_len; i++)
            {
                dest[i] = src[i];
            }
            dest[src_len] = '\0';
        }
        else
        {
            for (i = 0; i < dest_len; i++)
            {
                dest[i] = src[i];
            }
        }
    }

    return p;
}

/**
 * @brief: This function used to appen content from a string to other string
 * @param src: pointer to string will be coppied
 * @param dest: pointer to string will be appended to the end
 * @return: pointer point destination string
 */
char *my_str_concatenate(char *dest, const char *src)
{
    unsigned int dest_len;
    unsigned int i = 0;

    if ((dest == NULL) || (src == NULL))
    {
        return NULL;
    }

    dest_len = my_str_len(dest);

    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return dest;
}

/* strcmp */
int my_string_compare(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}
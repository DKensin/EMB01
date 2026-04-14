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
 * @param buf_size: size of dest string was static allocated
 * @return: pointer point destination string, NULL if copy failed
 */
char *my_str_copy(char *dest, const char *src, unsigned int buf_size)
{
    unsigned int src_len;
    unsigned int copy_size;
    char *p = NULL;
    int i;

    if ((src != NULL) && (dest != NULL))
    {
        p = dest;
        src_len = my_str_len(src);
        copy_size = (src_len < buf_size) ? (src_len) : (buf_size);

        for (i = 0; i < copy_size; i++)
        {
            dest[i] = src[i];
        }
        dest[copy_size] = '\0';
    }

    return p;
}

/**
 * @brief: This function used to append content from a string to other string
 * @param src: pointer to string will be coppied
 * @param dest: pointer to string will be appended to the end
 * @param buf_size: size of dest string was static allocated
 * @return: pointer point destination string, NULL if concatenate failed
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

/**
 * @brief: This function used to compare 2 strings.
 * Compare each character, one-by-one, when found the first different, based on ASCII code.
 * @param s1: first string
 * @param s2: second string
 * @return
 *      Negative: s1 < s2,
 *      0: s1 exactly same with s2,
 *      Positive: s1 > s2
 */
int my_str_compare(const char *s1, const char *s2)
{
    int result = 0;
    int i = 0;

    if ((s1 == NULL) && (s2 == NULL))
    {
        result = 0;
    }
    else if ((s1 == NULL) && (s2 != NULL))
    {
        result = -1;
    }
    else if ((s1 != NULL) && (s2 == NULL))
    {
        result = 1;
    }
    else
    {
        while ((s1[i] != '\0') && (s1[i] == s2[i]))
        {
            i++;
        }
        result = s1[i] - s2[i];
    }

    return result;
}
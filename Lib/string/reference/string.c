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

/**
 * @brief: This function used to search if a character exist in a string
 * @param str: string used to search
 * @param c: the character need to check
 * @return
 *      NULL: c not found,
 *      pointer point to the first position that found this character
 */
char *my_str_find_char(const char *s, char c)
{
    char *p = NULL;

    if (s != NULL)
    {
        p = (char *)s;
        while ((*p != c) && (*p != '\0'))
        {
            p++;
        }
        /* reach end of string s */
        if (*p == '\0')
        {
            p = NULL;
        }
    }

    return p;
}

/**
 * @brief: This function used to search if a string exist in a string
 * @param seek: string want to search
 * @param src: source where seek will find
 * @return
 *      NULL: seek not found,
 *      pointer point to the first position that found this seek string
 */
char *my_str_find_str(const char *src, const char *seek)
{
    char *p = NULL;
    int i = 0;
    int len = my_str_len(src);
    int k;
    int found_index = 0;

    if ((src != NULL) && (seek != NULL))
    {
        while (src[found_index] != '\0')
        {
            for (i = found_index+1; i < len; i++)
            {
                if (src[i] == seek[0])
                {
                    break;
                }
            }
            /* next loop should be started from next character*/
            found_index = i;
            k = 0; /* starting pair compair from first seek index */
            while (src[i] == seek[k])
            {
                i++;
                k++;
            }
            if (seek[k] == '\0')
            {
                p = (char *)(&src[found_index]);
                break;
            }
            else
            {
                p = NULL;
            }
        }
    }

    return p;
}
/**
 * @brief: This function used to convert a numeric string to an integer number
 * @param s: string used to convert
 * @return: an integer value (can be negative, position or 0)
 */
long long my_atoi(const char *s)
{
    long long value = 0;
    long long sign = 1;

    if (s != NULL)
    {
        /* check if string is a negative value*/
        if (*s == '-')
        {
            sign = -1;
            s++;    /* point to next character */
        }
        /* only accept digit character */
        while (('0' <= *s) && (*s <= '9'))
        {
            value = value * 10 + (*s - '0');
            s++;
        }
    }

    value *= sign;

    return value;
}

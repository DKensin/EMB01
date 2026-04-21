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
char *my_str_copy( char *dest, const char *src, unsigned int buf_size)
{
    unsigned int i = 0;

    if (dest == NULL || src == NULL || buf_size == 0)
    {
        return NULL;

    }

    while (i < (buf_size - 1) && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;

    }

    dest[i] = '\0';
    return dest;
    
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

/**
 *  @brief: This finction used to search of a character exist in a string
 *  @param str: string used to search
 *  @return 
 *     NULL: c not found,
 *    pointer point to the first position that found this character
 *
 */
 char *my_str_find_char(char *s, char c)
 {
    char *p = NULL;

    if (s != NULL)
    {
        p = s;
        while ((*p != c) && (*p != '\0'))
        {
            p++;
        }
        if (*p == '\0')
        {
            p = NULL;
        }
    }

    return p;
 }


 /**
  * @brief: This function used to search if a string exist in string
  * @param seek: string want to search
  * @param src: source where seek will find
  * @return
  *   NULL: seek not found,
  *   pointer point to the first position that found this seek string
  */


  char *my_str_find_str(char *src, const char *seek)
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

            /* next loop should be started from next character */
            found_index = i;
            k = 0; /* starting pair compair from first seek index*/
            while (src[i] == seek[k])
            {
                i++;
                k++;
            }
            if (seek[k] == '\0')
            {
                p = &src[found_index];
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
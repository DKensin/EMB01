#include <stdio.h>
#include "string.h"

#define STRING_SIZE     (13u)

int main(void)
{
    char str[STRING_SIZE] = "abcd";
    char *ptr = NULL;
    int result;
    char *s1 = "Toanb";
    char *s2 = "Toanaa";
    char c = 'a';

    /* test string copy function */
    ptr = my_str_copy(str, "Toan0123456789", STRING_SIZE-1);
    if (NULL == ptr)
    {
        printf("Copy failed\n");
    }
    else
    {
        printf("my_str_copy: content = %s\n", str);
    }

    /* test concatenate copy function */
    ptr = my_str_concatenate(str, "1234", STRING_SIZE-1);
    if (NULL == ptr)
    {
        printf("Concatenate failed\n");
    }
    else
    {
        printf("my_str_concatenate: content = %s\n", str);
    }

    /* test string compare funtion */
    result = my_str_compare(s1, s2);

    if (0 == result)
    {
        printf("%s and %s are exactly same\n", s1, s2);
    }
    else if (0 < result)
    {
        printf("%s > %s\n", s1, s2);
    }
    else /* negative value */
    {
        printf("%s < %s\n", s1, s2);
    }

    ptr = my_str_find_char(s2, c);
    int index;

    if (NULL == ptr)
    {
        printf("%c not exist in %s\n", c, s2);
    }
    else
    {
        index = ptr - s2;
        printf("%c found in %s, first appear at index %d\n", c, s2, index);
    }

    char *src = "C programming language. C programming is easy.";
    char *seek = "C programming";

    ptr = my_str_find_str(src, seek);

    if (ptr == NULL)
    {
        printf("%s not found in %s", seek, src);
    }
    else
    {
        index = ptr - src;
        printf("'%s' exist in '%s', starting at index %d", seek, src, index);
    }

    return 0;
}
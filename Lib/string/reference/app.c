#include <stdio.h>
#include "string.h"

#define STRING_SIZE     (20u)

int main(void)
{
    char str[STRING_SIZE] = "abcd";
    char *ptr = NULL;
    long long result;
    char *s1 = "Toanb";
    char *s2 = "Toanaa";
    char c = 'a';

    printf("=========================================================\n");
    printf("original string = %s\n", str);

    printf("================ String Processing ======================\n");

    /* test string copy function */
    ptr = my_str_copy(str, "Toan0123456789", STRING_SIZE-1);
    if (NULL == ptr)
    {
        printf("Copy string failed\n");
    }
    else
    {
        printf("string after copy = %s\n", str);
    }

    /* test concatenate copy function */
    ptr = my_str_concatenate(str, "1234", STRING_SIZE-1);
    if (NULL == ptr)
    {
        printf("Concatenate string failed\n");
    }
    else
    {
        printf("string after concatenate = %s\n", str);
    }

    /* test string compare funtion */
    result = my_str_compare(s1, s2);

    if (0 == result)
    {
        printf("%s and %s are exactly same\n", s1, s2);
    }
    else if (0 < result)
    {
        printf("compare string: %s > %s\n", s1, s2);
    }
    else /* negative value */
    {
        printf("compare string: %s < %s\n", s1, s2);
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
        printf("'%c' found in '%s', first appear at index %d\n", c, s2, index);
    }

    char *src = "The C journey. C programming language is easy";
    char *seek = "C programming";

    ptr = my_str_find_str(src, seek);

    if (ptr == NULL)
    {
        printf("'%s' not found in '%s'", seek, src);
    }
    else
    {
        index = ptr - src;
        printf("Found '%s' in '%s', starting at index %d\n", seek, src, index);
    }

    ptr = my_str_copy(str, "123456789123456789", STRING_SIZE-1);
    if (ptr != NULL)
    {
        result = my_atoi(str);
        printf("result = %lld\n", result);
    }
    else
    {
        printf("Copy string failed\n");
    }

    printf("================ Done.===================================\n");

    return 0;
}
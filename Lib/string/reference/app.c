#include <stdio.h>
#include "string.h"
#include <string.h>

#define STRING_SIZE     (13u)

int main(void)
{
    char str[STRING_SIZE] = "abcd";
    char *ptr = NULL;
    int result;
    char *s1 = "Toanb";
    char *s2 = "Toanaaaaaaaaaaaaaaaaaaaa";

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

    return 0;
}
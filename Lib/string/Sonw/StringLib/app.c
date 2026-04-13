#include <stdio.h>
#include "string.h"
#include <string.h>

#define STRING_SIZE     (13u)

int main(void)
{
    char str[STRING_SIZE] = "abcd";
    char *ptr = NULL;

    ptr = my_str_copy(str, "Toan0123456789", STRING_SIZE-1);
    if (NULL == ptr)
    {
        printf("Copy failed\n");
    }
    else
    {
        printf("my_str_copy: content = %s\n", str);
    }

    ptr = my_str_concatenate(str, "1234", STRING_SIZE-1);
    if (NULL == ptr)
    {
        printf("Concatenate failed\n");
    }
    else
    {
        printf("my_str_concatenate: content = %s\n", str);
    }

    char first[]  = "Toanaaaaaaaaaaaaaaaa";
    char second[] = "ToanbA";
    int result = strcmp(first, second);

    printf("result = %d\n", result);

    return 0;
}

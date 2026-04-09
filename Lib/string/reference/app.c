#include <stdio.h>
#include "string.h"

#define STRING_SIZE     (13u)

int main(void)
{
    char str[STRING_SIZE] = "abcd";

    (void)my_str_copy(str, "Toan0123456789");

    printf("my_str_copy: content = %s\n", str);

    (void)my_str_concatenate(str, "1234", STRING_SIZE-1);

    printf("my_str_concatenate: content = %s\n", str);

    return 0;
}

#include <stdio.h>
#include "string.h"

int main(void)
{
    char str[] = "Hello Word\n";
    char dest[32] = "CAPTION";

    unsigned int len = my_str_len(str);
    printf("len = %u\n", len);

    my_str_copy(str, dest);
    printf("str copy = %s\n", dest);

    return 0;
}
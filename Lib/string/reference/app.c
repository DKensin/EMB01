#include <stdio.h>
#include "string.h"


int main(void)
{
    char str[11] = "AAAAAAAAAA";

    (void)my_str_copy(str, "Toan");

    printf("content = %s\n", str);

    return 0;
}

#include <stdio.h>
#include "string.h"
#include <string.h>

int main(void)
{
    char str[3] = "AA";

    // (void)my_str_copy(str, "Toan");

    (void)strcat(str, "Toan");

    printf("content = %s\n", str);

    return 0;
}

#include <stdio.h>
#include "string.h"
//#include <string.h>

int main(void)
{
    char str[2] = "A";

    //(void)my_str_copy(str, "Toan");

    (void)my_str_concatenate(str, "Toan");

    printf("content = %s\n", str);

    return 0;
}

#include <stdio.h>
#include "custom_string.h"

int main()
{
    char s1[] = "BuiTuanHung";
    char s2[20];

    printf("Len = %zu\n", my_string_len(s1));

    my_string_copy(s2, s1);
    printf("Copy = %s\n", s2);

    printf("Compare = %d\n", my_string_compare("BuiTuanHung", "BuiTuanHung4651846"));

    return 0;
}

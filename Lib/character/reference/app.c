#include <stdio.h>
#include "character.h"

int main(void)
{
    char c = 'a';
    int result = my_isalpha(c);

    printf("result = %d\n", result);

    c = 1;
    result = my_isdigit(c);
    printf("result = %d\n", result);

    c = '\v';
    result = my_isspace(c);
    printf("result = %d\n", result);

    return 0;
}
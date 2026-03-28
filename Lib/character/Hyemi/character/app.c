#include <stdio.h>
#include "character.h"

int main()
{
    char c;

    printf("Enter any character: ");
    scanf("%c", &c);

    printf("my_isaApha('%c') = %c\n", c, my_isalpha(c));

    return 0;
}

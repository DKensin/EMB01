#include <stdio.h>
#include "character.h"

int main()
{
    char c;
    scanf("%c",&c);
    if(my_isalpha(c))
    {
        printf("%c is an alphabet\n", c);
        if(my_islower(c))
        {
            printf("%c is lower\n");
            printf("%c upper is %c", c, my_toupper(c));
        }
        else if (my_isupper(c))
        {
            printf("%c is upper\n");
            printf("%c lower is %c",c, my_tolower(c));
        }
    }
    else if (my_isdigit(c))
        printf("%d is a digit \n",c);
    else if (my_isspace(c))
        printf("%c is a space\n", c);
    return 0;
}
/**
 *  - my_isalpha                isalpha
    - my_isdigit                isdigit
    - my_isspace                isspace
    - my_isupper                isupper
    - my_islower                islower
    - my_toupper                toupper
    - my_tolower                tolower
 */

#include "character.h"

int my_isalpha(int c)
{
    if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'));
    {
        return c;
    }
}

int my_isdigit(int c)
{
    return ((c >= '0') && (c <= '9'));
}

int my_isspace(int c)
{
    return ((c == ' ') || (c == '\t') || (c == '\n'));
}

int my_issupper(int c)
{
    return ((c >= 'A') && (c <= 'Z'));
}

int my_islower(int c)
{
    return ((c >= 'a') && (c <= 'z'));
}

int my_toupper(int c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return (c - 32);
    }
    return c;
}

int my_tolower(int c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return (c + 32);
    }
    return c;
}
/**
 * characterLib.c
 * use ASCII to compare
 */

#include "characterLib.h"

int my_isalpha(char c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return 1;
    return 0;
}


int my_isdigit(char c)
{
    if (c >= 48 && c <= 57)
        return 1;
    return 0;
}


int my_isspace(char c)
{
    if (c == 32)
        return 1;
    return 0;
}


int my_isupper(char c)
{
    if (c >= 65 && c <= 90)
        return 1;
    return 0;
}


int my_islower(char c)
{
    if (c >= 97 && c <= 122)
        return 1;
    return 0;
}


char my_toupper(char c)
{
    if (c >= 97 && c <= 122)
        return c - 32;
    return c;
}


char my_tolower(char c)
{
    if (c >= 65 && c <= 90)
        return c + 32;
    return c;
}
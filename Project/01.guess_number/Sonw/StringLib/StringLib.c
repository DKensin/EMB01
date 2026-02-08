#include "Stringlib.h"

int my_strlen(char str[])
{
    int count = 0;

    while (str[count] != '\0')
    {
        count = count + 1;
    }

    return count;
}

int my_strcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i = i + 1;
    }

    return str1[i] - str2[i];
}

char* my_strcpy(char dest[], char src[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i = i + 1;
    }

    dest[i] = '\0';

    return dest;
}
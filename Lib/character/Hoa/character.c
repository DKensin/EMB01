
/**
 @brief: This function used to chheck character c is a alphabet (a-z or A-Z)
 @param c (character to check)
 @return:
    1: c is alphabet
    0: c isn't alphabet
*/

int my_isalpha(int c)
{
    int result = 0;
    if((c>='A'&&c<='z')||(c>='a'&&c<='z'))
        result = 1;

    return result;
}

/** 
 @brief: This function used to check if a character is digit (0-9).
 @param c (character to check)
 @return:
    1: c is a digit
    0: c is not a digit
 */

int my_isdigit(char c)
{
    int result = 0;
    if(c>=0&&c<=9)
        result = 1;

    return result;
}

/**
 @brief: This function used to check if a character is uppercase (A-Z only).
 @param c (character to check)
 @return:
    1: c is a uppercase
    0: c is not a uppercase
 */
int my_isupper(int c)
{
    int result = 0;

    if (('A' <= c) && (c <= 'Z'))
        result = 1;

    return result;
}

/**
 @brief: This function used to check if a character is lowercase (a-z only).
 @param c (character to check)
 @return:
    1: c is a lowercase
    0: c is not a lowercase
 */
int my_islower(int c)
{
    int result = 0;

    if (('a' <= c) && (c <= 'z'))
        result = 1;

    return result;
}


/**
 @brief: This function used to convert a character to uppercase.
    If this character is an uppercase letter or is not a lowercase letter, the function returns the character unchanged.
 @param c (character to check)
 @return: uppercase or unchanged character
 */
int my_toupper(int c)
{
    int result = c;

    if (('a' <= c) && (c <= 'z'))
        c -= ('a' - 'A');

    return c;
}

/**
 @brief: This function used to convert a character to lowercase.
    if this character is an lowercase letter or is not a uppercase letter, the function returns the character unchanged.
 @param c (character to check)
 @return: lowercase or unchanged character
 */
int my_tolower(int c)
{
    int result = c;

    if (('A' <= c) && (c <= 'Z'))
        c += ('a' - 'A');

    return c;
}

/**
 @brief: This function used to check if a character is white space.
    White space: (' '), ('\f'), ('\n'), ('\r'), ('\t'), ('\v')
 @param c (character to check)
 @return:
 *      1: c is a white space character
 *      0: c is not a white space character
 */
int my_isspace(int c)
{
    int result = 0;

    if ((c == ' ') || (c == '\f') || (c == '\n') || (c == '\r') || (c == '\t') || (c == '\v'))
        result = 1;

    return result;
}

#define     SPACE               (' ')
#define     NEWLINE             ('\n')
#define     VERTICAL            ('\v')
#define     HORIZONTAL_TAB      ('\t')

/**
 * @brief: this function is used to check if a character is alphabet or not
 * @param c: character to check
 * @return:
 *  1: c is a alphabet
 *  0: c is not a alphatbet
 */
int my_isalpha(int c)
{
    if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'));
    {
        return c;
    }
}

/**
 * @brief: this function is used to check if a character is digit (0-9)
 * @param c: character to check
 * @return:
 *  1: c is a digit
 *  0: c is not a digit
 */
int my_isdigit(int c)
{
    return ((c >= '0') && (c <= '9'));
}

/**
 * @brief: this function is used to check if a character is white space
 * @param c: character to check
 * @return:
 *  1: c is a white space
 *  0: c is not a white space
 */
int my_isspace(int c)
{
    return ((c == SPACE) || (c == HORIZONTAL_TAB) || (c == NEWLINE));
}

/**
 * @brief: this function is used to check if a character is uppercase (A-Z)
 * @param c: character to check
 * @return:
 *  1: c is a uppercase
 *  0: c is not a uppercase
 */
int my_issupper(int c)
{
    return ((c >= 'A') && (c <= 'Z'));
}

/**
 * @brief: this function is used to check if a character is lowercase (a-z)
 * @param c: character to check
 * @return:
 *  1: c is a lowercase
 *  0: c is not a lowercase
 */
int my_islower(int c)
{
    return ((c >= 'a') && (c <= 'z'));
}

/**
 * @brief: this function is used to convert to uppercase like this a -> A
 * @param c: character to check
 * @return:
 * lowercase or unchanged charracter
 */
int my_toupper(int c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return (c - 32);
    }
    return c;
}

/**
 * @brief: this function is used to convert to lowercase like this A -> a
 * @param c: character to check
 * @return:
 * uppercase or unchanged charracter
 */
int my_tolower(int c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return (c + 32);
    }
    return c;
}
#define SPACE                   (' ')
#define FORM_FEED               ('\f')
#define NEWLINE                 ('\n')
#define CARRIAGE_RETURN         ('\r')
#define HORIZONTAL_TAB          ('\t')
#define VERTICAL_TAB            ('\v')

/**
 * @brief: This function used to check if a character is alphabet (a-z or A-Z).
 * @param c: character to check
 * @return:
 *      1: c is a alphabet
 *      0: c is not a alphabet
 */
int my_isalpha(int c)
{
    int result = 0;

    if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
    {
        result = 1;
    }

    return result;
}

/**
 * @brief: This function used to check if a character is digit (0-9).
 * @param c: character to check
 * @return:
 *      1: c is a digit
 *      0: c is not a digit
 */
int my_isdigit(int c)
{
    int result = 0;

    if (('0' <= c) && (c <= '9'))
    {
        result = 1;
    }

    return result;
}

/**
 * @brief: This function used to check if a character is white space.
 * White space include:
 *      Space (' ')
 *      Form feed ('\f')
 *      Newline ('\n')
 *      Carriage return ('\r')
 *      Horizontal tab ('\t')
 *      Vertical tab ('\v')
 * @param c: character to check
 * @return:
 *      1: c is a white space character
 *      0: c is not a white space character
 */
int my_isspace(int c)
{
    int result = 0;

    if (   (c == SPACE) || (c == FORM_FEED) || (c == NEWLINE) || (c == CARRIAGE_RETURN)
        || (c == HORIZONTAL_TAB) || (c == VERTICAL_TAB)
       )
    {
        result = 1;
    }

    return result;
}

/**
 * @brief: This function used to check if a character is uppercase (A-Z only).
 * @param c: character to check
 * @return:
 *      1: c is a uppercase
 *      0: c is not a uppercase
 */
int my_isupper(int c)
{
    int result = 0;

    if (('A' <= c) && (c <= 'Z'))
    {
        result = 1;
    }

    return result;
}

/**
 * @brief: This function used to check if a character is lowercase (a-z only).
 * @param c: character to check
 * @return:
 *      1: c is a lowercase
 *      0: c is not a lowercase
 */
int my_islower(int c)
{
    int result = 0;

    if (('a' <= c) && (c <= 'z'))
    {
        result = 1;
    }

    return result;
}

/**
 * @brief: This function used to convert a character to uppercase.
 * If this character is an uppercase letter or is not a lowercase letter,
 * the function returns the character unchanged.
 * @param c: character to check
 * @return: uppercase or unchanged character
 */
int my_toupper(int c)
{
    int result = c;

    if (('a' <= c) && (c <= 'z'))
    {
        c -= ('a' - 'A');
    }

    return result;
}

/**
 * @brief: This function used to convert a character to lowercase.
 * If this character is an lowercase letter or is not a uppercase letter,
 * the function returns the character unchanged.
 * @param c: character to check
 * @return: lowercase or unchanged character
 */
int my_tolower(int c)
{
    int result = c;

    if (('A' <= c) && (c <= 'Z'))
    {
        c += ('a' - 'A');
    }

    return result;
}

#define SPC     (' ')
#define TAB     ('\t')
#define LF      ('\n')
#define VT      ('\v')
#define FF      ('\f')
#define CR      ('\r')

/**
 * @brief: This function used to check if a character is alphabet (a-z or A-Z)
 * @param c: Character to check
 * @return:
 *          1: c is a alphabet
 *          0: c is not alphabet
 */
int my_isalpha(int c)
{
    int result = 0;
    if(((c >= 'A') && (c <= 'Z'))||((c >= 'a') && (c <= 'z')))
    {
        result = 1;
    }
    return result;
}

/**
 * @brief: This funcction used to check if a character is digit (0-9)
 * @param c: character to check
 * @return:
 *          1: c is a digit
 *          0: is not a digit
 */
int my_isdigit(int c)
{
    int result = 0;
    if((c >= '0') && (c <= '9'))
    {
        result = 1;
    }
    return result;
}

/**
 * @brief: This functon used to check if a character is white-space
 * @param c: charactor to check
 * While space include:
 *                  ' '     space (SPC)
 *                  '\t'    horizontal tab (TAB)
 *                  '\n'    newline (LF)
 *                  '\v'    vertical tab (VT)
 *                  '\f'    feed (FF)
 *                  '\r'    carriage return (CR)
 *
 * @return:
 *          1: c is a white space character
 *          0: c is not a white space character
 */
 int my_isspace(int c)
{
    int result = 0;
    if((c == SPC) || (c == TAB) || (c == LF) || (c == VT) || (c == FF) || (c == CR))
    {
        result = 1;
    }
    return result;

}

/**
 * @brief: This function used check if character is an uppercase letter
 * @param C: character to check
 * @return:
 *          1: c is an uppercase letter
 *          0: c is not upercase letter
 */
int my_isupper(int c)
{
    int result = 0;
    if((c >= 'A') && (c <= 'Z'))
    {
        result = 1;
    }
    return result;
}

/**
 * @brief: This function used to check if a character is lowercase letter
 * @param c: character to check
 * @return:
 *          1: c is a lowercase letter
 *          0: c is not a lowercase letter
 */
int my_islower(int c)
{
    int result = 0;
    if((c >= 'a') && (c <= 'z'))
    {
        result = 1;
    }
    return result;
}

/**
 * @brief: This function used to converts lowercase letter to uppercase. If the given character is already an uppercase letter or is not a lawercase letter, the function returns the character unchanged
 * @param c: character to check
 * @return: uppercase or unchanged character
 */
int my_toupper(int c)
{
    int result = c;
    if((c >= 'a') && (c <= 'z'))
    {
        c -= ('a' - 'A');
    }
    return result;
}

/**
 * @brief: This function used to converts uppercase letter to lowercase
 * @param: character to check
 * @return: lowercase or unchanged character
*/
int my_tolower(int c)
{
    int result = c;
    if(('A' <= c) && (c <= 'Z'))
    {
        c += ('a' - 'A');
    }
    return result;
}
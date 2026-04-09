#include<stdio.h>
#include"character.h"

#define SPC     (' ')
#define TAB     ('\t')
#define LF      ('\n')
#define VT      ('\v')
#define FF      ('\f')
#define CR      ('\r')

int main()
{
    /*check character is alphabet*/
    char c = 'a';
    int result = my_isalpha(c);
    printf("result = %d\n", result);

    /*check character is digit*/
    char a = '5';
    result = my_isdigit(a);
    printf("result = %d\n", result);

    /*check character is white-space*/
    char g_b = SPC;
    char g_d = TAB;
    char g_e = LF;
    char g_f = VT;
    char g_g = FF;
    char g_h = '\a';
    result = my_isspace(g_b);
    printf("result_space = %d\n", result);

    result = my_isspace(g_d);
    printf("result_tab = %d\n", result);

    result = my_isspace(g_e);
    printf("result_newline = %d\n", result);

    result = my_isspace(g_f);
    printf("result_vertical_tab = %d\n", result);

    result = my_isspace(g_g);
    printf("result_feed = %d\n", result);

    result = my_isspace(g_h);
    printf("result_carriage_return = %d\n", result);

    return 0;

}
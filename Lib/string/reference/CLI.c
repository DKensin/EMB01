#include <stdio.h>
#include "string.h"

/* -s: to calculate sum of 2 numbers */
/* -m: to calculate mul of 2 numbers */

void sum(int a, int b)
{
    printf("Calculate sum of 2 integers...\n");
    printf("sum = %d\n", a+b);
}

void mul(int a, int b)
{
    printf("Calculate multiply of 2 integers...\n");
    printf("mul = %d\n", a*b);
}

void action(char *option, int a, int b)
{
    if (0 == my_str_compare(option, "-s"))
    {
        sum(a,b);
    }
    else if (0 == my_str_compare(option, "-m"))
    {
        mul(a,b);
    }
    else
    {
        /* nothing to do */
    }
}

static void help(void)
{
    printf("\n");
    printf("==================INSTRUCTION====================================\n");
    printf("1. usage: program.exe [option] [value1] [value2]\n");
    printf("2. option:\n");
    printf("        -s: used to calculate sum of 2 integer numbers\n");
    printf("        -m: used to calculate multiply of 2 integer numbers\n");
    printf("3. value1: first integer number\n");
    printf("4. value2: second integer number\n");
    printf("=================================================================\n");
    printf("\n");
}

int main(int argc, char* argv[])
{
    int a = argv[2];
    int b = my_atoi(argv[3]);
    char *option = argv[1];
    if (argc == 4)
    {
        action(option, a, b);
    }
    else if (0 == my_str_compare(argv[1], "--h"))
    {
        help();
    }
    else
    {
        printf("You should pass enough parameters: program_name option (-s/-m) first_integer second_integer\n");
    }

    return 0;
}
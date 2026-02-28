/*  Write a function with 
- input is letter = '123'
- output is number = 123
*/

#include <stdio.h>

int my_atoi(char s[]);

int main(void)
{
    char s[100]; //allocate memory
    int number;

    printf("Enter number: ");
    scanf("%s", s); //enter string

    number = my_atoi(s); //function call

    printf("Result = %d\n", number);

    return 0;
}
int my_atoi(char s[])
{
    int i = 0;
    int negative = 1; 
    int result = 0;

    if (s[i] == '-')
    {
        negative = -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') //read number
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * negative;
}
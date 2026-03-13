#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0) continue;
        printf("i = %d (lẻ)\n", i);
    }
    return 0;
}
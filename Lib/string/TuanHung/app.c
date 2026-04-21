#include <stdio.h>
#include "string.h"
//#include <string.h>
#define STRING_SIZE     (15u)
int main(void)
{
    char str[STRING_SIZE] = "abcd";
    char *ptr = NULL;
    //int result;
    //char *s1 = "Toanb";
    //char *s2 = "Toanaaaaaaaaaaaaaaaaaaaa";

    /* test string copy function */
    ptr = my_str_copy(str, "Toan0123456789", STRING_SIZE-1);
    
    
    
    
    
    
    
    
    
    int index;
    
    char *src = "The C journey. C programming language is easy";
    char *seek = "C programming";
    ptr = my_str_find_str(src, seek);

    if (ptr == NULL)
    {
        printf("'%s' not found in '%s'", seek, src);
    }
    else
    {
        index = ptr - src;
        printf("Found '%s' in '%s', starting at index %d", seek, src, index);
    }

    return 0;
    
    
    
    
    
}

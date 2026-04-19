#include "string.h"
#include <stdio.h>
#define STR_LEN (10u)

int main()
{
    char str1[STR_LEN], str2[STR_LEN];
    char *p=NULL;
    printf("String 1: ");
    scanf("%s",str1);
    printf("String 2: ");
    scanf("%s",str2);

    if(compare_string(str1,str2))
        printf("Same\n");
    else
        printf("Different\n");

    copy_string(str1,str2);

    if(compare_string(str1,str2)==0)
        printf("Same\n");
    else if ((compare_string(str1,str2)<0))
        printf("Str1 < Str2\n");
    else (compare_string(str1,str2)>0)
        printf("Str1 > Str2\n");

    p=str_concatenate(str2,str1, STR_LEN-1);
    if(p==NULL)
    {
        printf("Concatenate failed\n");
    }
    else
    {
        printf("my_str_concatenate: content = %s\n", str2);
    }

    p = find_a_char(s2, c);
    int index;

    if (NULL == p)
    {
        printf("%c not exist in %s\n", c, s2);
    }
    else
    {
        index = p - s2;
        printf("%c found in %s, first appear at index %d\n", c, s2, index);
    }

    char *src = "C programming language. C programming is easy.";
    char *seek = "C programming";

    p = find_a_str(src, seek);

    if (p == NULL)
    {
        printf("%s not found in %s", seek, src);
    }
    else
    {
        index = p - src;
        printf("'%s' exist in '%s', starting at index %d", seek, src, index);
    }


    printf("Length of str2: %d\n", str_len(str2));


    char strint[STR_LEN]="13534io2";
    printf("%d",my_atoi(strint));

    return 0;
}

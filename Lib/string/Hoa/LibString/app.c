#include "string.h"
#include <stdio.h>

int main()
{
    char str1[50], str2[50]; 
    printf("String 1: ");
    scanf("%s",str1);
    printf("String 2: ");
    scanf("%s",str2);

    if(compare_string(str1,str2))
        printf("Same\n");
    else
        printf("Different\n");

    copy_string(str1,str2);

    if(compare_string(str1,str2))
        printf("Same\n");
    else
        printf("Different\n");

    printf("Length of str2: %d\n", str_len(str2));

    char strint[50]="13534io2";
    printf("%d",my_atoi(strint));

    return 0;
}
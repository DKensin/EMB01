#include <stdio.h>
#include "Stringlib.h"

int main()
{
    char src[] = "Xin chao moi nguoi";
    char dest[50];

    // Test strlen
    int dodai = my_strlen(src);
    printf("Do dai: %d\n", dodai);

    // Test strcpy
    my_strcpy(dest, src);
    printf("Sau khi copy: %s\n", dest);

    // Test strcmp
    printf("So sanh src va dest: %d\n", my_strcmp(src, dest));

    char s1[] = "abc";
    char s2[] = "abd";
    printf("So sanh abc va abd: %d\n", my_strcmp(s1, s2));

    char s3[] = "xyz";
    char s4[] = "xy";
    printf("So sanh xyz va xy: %d\n", my_strcmp(s3, s4));

    return 0;
}
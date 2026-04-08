#ifndef CUSTOM_STRING_H
#define CUSTOM_STRING_H

#include <stddef.h>   // cho size_t

size_t my_string_len(const char *str);
int    my_string_compare(const char *s1, const char *s2);
char*  my_string_copy(char *dest, const char *src);
char *my_str_concatenate(char *dest, const char *src);
#endif

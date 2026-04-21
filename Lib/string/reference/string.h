#ifndef __STRING_H__
#define __STRING_H__

unsigned int my_str_len(const char *str);
char *my_str_copy(char *dest, const char *src, unsigned int buf_size);
char *my_str_concatenate(char *dest, const char *src, unsigned int buf_size);
int my_str_compare(const char *s1, const char *s2);
char *my_str_find_char(const char *str, char c);
char *my_str_find_str(const char *src, const char *seek);
long long my_atoi(const char *str);

#endif /* __STRING_H__ */

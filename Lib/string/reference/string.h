#ifndef __STRING_H__
#define __STRING_H__

unsigned int my_str_len(const char *str);
char *my_str_copy(char *dest, const char *src, unsigned int buf_size);
char *my_str_concatenate(char *dest, const char *src, unsigned int buf_size);
int my_str_compare(const char *s1, const char *s2);

#endif /* __STRING_H__ */

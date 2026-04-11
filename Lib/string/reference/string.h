#ifndef __STRING_H__
#define __STRING_H__

unsigned int my_str_len(const char *str);
char *my_str_copy(char *dest, const char *src);
char *my_str_concatenate(char *dest, const char *src, unsigned int buf_size);

#endif /* __STRING_H__ */

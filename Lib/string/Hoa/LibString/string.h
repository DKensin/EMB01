#ifdef __STRING_H_
#define __STRING_H_

int str_len(char *str);
int compare_string (char *str1,char *str2);
char *copy_string(char *dest, const char *src)
char *my_str_concatenate(char *dest, const char *src, unsigned int buf_size);
int my_atoi(char str[]);
#endif

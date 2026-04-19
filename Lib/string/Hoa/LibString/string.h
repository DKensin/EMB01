#ifdef __STRING_H_
#define __STRING_H_

int str_len(char *str);
int compare_string (char *str1,char *str2);
char *copy_string(char *dest, const char *src)
char *str_concatenate(char *dest, const char *src, unsigned int buf_size);
char *find_a_char(const char *str, const char c);
char *find_a_str(const char *str, const char *str_f);
int my_atoi(char str[]);
#endif

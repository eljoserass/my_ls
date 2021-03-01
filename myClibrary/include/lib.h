/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** macro for the lib
*/

#ifndef LIB_H_
#define LIB_H_

int my_strlen(char const *str);
int my_strcmp(char const *n1, char const *n2);
void my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
void my_print_array(char **array);
void free_double_array(char **arr);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
char *my_concat_strings(char *sone, char *stwo);
unsigned int my_arrsize(char **arr);
char **my_arrdup(char **arr, char *str);

#endif /* !MY_H_ */

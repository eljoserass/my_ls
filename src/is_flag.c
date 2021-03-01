/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** check if its a flag
*/

#include "my_ls.h"

int is_flag(char *str)
{
    int i = 1;

    while (str[i] != '\0') {
        if (str[i] != 'l') {
            return (i);
        }
        i++;
    }
    return (-1);
}
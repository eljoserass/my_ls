/*
** EPITECH PROJECT, 2020
** my_pustr.c
** File description:
** print string
*/

#include "lib.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
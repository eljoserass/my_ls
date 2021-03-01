/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** print a array of strings
*/

#include <stdlib.h>
#include "lib.h"

void my_print_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_putstr(array[i]);
        i++;
    }
    my_putchar('\n');
}
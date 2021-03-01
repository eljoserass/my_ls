/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** allocates memory for string and copy the one given as argument on it
*/

#include <stdlib.h>
#include "lib.h"

char *my_strdup(char const *str)
{
    char *new = malloc(sizeof(char) * (my_strlen(str) + 1));

    if (!new) {
        return (NULL);
    }
    my_strcpy(new, str);
    return (new);
}

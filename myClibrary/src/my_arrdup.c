/*
** EPITECH PROJECT, 2021
** antman
** File description:
** strdup but with arrays
*/

#include "lib.h"
#include <stdlib.h>

char **my_arrdup(char **arr, char *str)
{
    int i = 0;
    char **new = malloc(sizeof(char *) * (my_arrsize(arr) + 2));

    if (!new) {
        return (NULL);
    }
    while (arr[i]) {
        new[i] = my_strdup(arr[i]);
        if (!new[i]) {
            return (NULL);
        }
        i++;
    }
    new[i] = my_strdup(str);
    new[++i] = NULL;
    return (new);
}
/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** concat two string (minishell mod)
*/

#include "lib.h"
#include <stdlib.h>

char *my_concat_strings(char *sone, char *stwo)
{
    int i = 0;
    int j = 0;
    int size = my_strlen(sone) + my_strlen(stwo) + 3;
    char *result = malloc(sizeof(char) * size);

    if (!result)
        return (NULL);
    while (sone[i] != '\0') {
        result[i] = sone[i];
        i++;
    }
    result[i] = '/';
    i++;
    while (stwo[j] != '\0') {
        result[i] = stwo[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return (result);
}
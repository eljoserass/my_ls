/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** free a char **
*/

#include <stdlib.h>

void free_double_array(char **arr)
{
    int a = 0;

    while (arr[a] != NULL) {
        free(arr[a]);
        a++;
    }
    free(arr);
}
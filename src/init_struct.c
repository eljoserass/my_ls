/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** init params struct
*/

#include "my_ls.h"

param_t *init_param(void)
{
    param_t *params = malloc(sizeof(param_t));

    if (!params)
        return (NULL);
    params->flags = NULL;
    params->folders = NULL;
    return (params);
}
/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** print_with_flags
*/

#include "my_ls.h"

int print_with_flags(param_t *params, DIR *dirp, struct dirent *dirent)
{
    do_l_flag(params, dirp, dirent);
    return (0);
}
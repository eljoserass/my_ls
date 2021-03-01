/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** function with the main loop
*/

#include "my_ls.h"

int my_ls(char **av, int ac)
{
    DIR *dirp = NULL;
    struct dirent *inside = NULL;
    param_t *param = init_param();

    if (parse_input(param, av) == 84)
        return (84);
    if (!param->flags[0])
        return (print_folders(param, ac, dirp, inside));
    return (print_with_flags(param, dirp, inside));
}
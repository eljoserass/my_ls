/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** print with differents folders
*/

#include "my_ls.h"

int print_folders(param_t *params, int ac, DIR *dirp, struct dirent *inside)
{
    int i = 0;

    if (ac == 1)
        return (print_current(params, dirp, inside));
    while (params->folders[i]) {
        if (my_arrsize(params->folders) > 1) {
            my_putstr(params->folders[i]);
            my_putstr(":\n");
        }
        dirp = opendir(params->folders[i]);
        print_current(params, dirp, inside);
        closedir(dirp);
        if (params->folders[i + 1] != NULL)
            my_putstr("\n\n");
        i++;
    }
    if (my_strcmp(params->folders[0], ".") != 0)
        my_putchar('\n');
    return (0);
}
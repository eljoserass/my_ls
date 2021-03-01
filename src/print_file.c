/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** print file
*/

#include "my_ls.h"

void print_blue(char *name)
{
    my_putstr("\033[0;34m");
    my_putstr(name);
    my_putstr("\033[0m");
}

void print_file(struct dirent *inside)
{
    if (inside->d_type == DT_DIR)
        print_blue(inside->d_name);
    else
        my_putstr(inside->d_name);
    my_putchar(' ');
}

int print_current(param_t *params,  DIR *dirp, struct dirent *inside)
{
    int i = 0;

    if (!params->folders[0])
        dirp = opendir(".");
    while ((inside = readdir(dirp))) {
        if (inside->d_name[0] != '.')
            print_file(inside);
        if (i == 11) {
            my_putchar('\n');
            i = 0;
        }
        i++;
    }
    return (0);
}
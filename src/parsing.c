/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** parsing
*/

#include "my_ls.h"

int parse_flags(param_t *params, char **av)
{
    int i = 1;
    int err = 0;

    if (!(params->flags = malloc(sizeof(char *) * 1)))
        return (84);
    while (av[i] != NULL) {
        if (av[i][0] == '-') {
            if ((err = is_flag(av[i])) != -1) {
                my_putstr("ls: invalid option -- '");
                my_putchar(av[i][err]);
                my_putstr("'\n");
                return (84);
            }
            if (!(params->flags = my_arrdup(params->flags, av[i])))
                return (84);
        }
        i++;
    }
    return (0);
}

int parse_dir(param_t *params, char **av)
{
    int i = 1;

    params->folders = malloc(sizeof(char *) * 1);
    if (!params->folders) {
        return (84);
    }
    params->folders[0] = NULL;
    while (av[i]) {
        if (av[i][0] == '-') {
            i++;
        }
        if (av[i] == NULL)
            return (0);
        if (!opendir(av[i])) {
            my_putstr("ls: cannot access ");
            my_putchar('\'');
            my_putstr(av[i]);
            my_putstr("\': No such file or directory\n");
            return (84);
        } else {
            params->folders = my_arrdup(params->folders, av[i]);
        }
        i++;
    }
    return (0);
}

int parse_input(param_t *params, char **av)
{
    if (parse_flags(params, av) == 84)
        return (84);
    if (parse_dir(params, av) == 84)
        return (84);
    return (0);
}
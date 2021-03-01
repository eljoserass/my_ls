/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** flags
*/

#include "my_ls.h"

void print_file_type(struct dirent *dirent)
{
    if (dirent->d_type & DT_DIR)
        my_putchar('d');
    else if (dirent->d_type == DT_REG)
        my_putchar('-');
    else
        my_putchar('l');
}

void print_permissions(struct stat info)
{
    print_permission_user(info);
    print_permission_group(info);
    print_permission_other(info);
}

int print_info(struct stat info, struct dirent *dirent)
{
    print_file_type(dirent);
    print_permissions(info);
    print_nb_links(info);
    print_user(info);
    print_group(info);
    print_size(info);
    print_time(info);
    my_putchar(' ');
    return (0);
}

int get_info(DIR *dirp, struct dirent *dirent, char *current)
{
    char *path = NULL;
    struct stat info;

    dirp = opendir(current);
    while ((dirent = readdir(dirp))) {
        if (dirent->d_name[0] != '.') {
            path = my_concat_strings(".", dirent->d_name);
            stat(path, &info);
            print_info(info, dirent);
            print_file(dirent);
            my_putchar('\n');
        }
    }
    closedir(dirp);
    return (0);
}

int do_l_flag(param_t *params, DIR *dirp, struct dirent *dirent)
{
    int i = 0;

    if (!params->folders[0]) {
        print_total(dirp, dirent, ".");
        get_info(dirp, dirent, ".");
        return (0);
    }
    while (params->folders[i] != NULL) {
        if (my_arrsize(params->folders) > 1) {
            my_putstr(params->folders[i]);
            my_putstr(":\n");
        }
        print_total(dirp, dirent, params->folders[i]);
        get_info(dirp, dirent, params->folders[i]);
        if (params->folders[i + 1] != NULL)
            my_putchar('\n');
        i++;
    }
    return (0);
}

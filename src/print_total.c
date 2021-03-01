/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** print total
*/

#include "my_ls.h"

void print_nb_links(struct stat info)
{
    my_putchar(' ');
    my_put_nbr(info.st_nlink);
}

void print_user(struct stat info)
{
    struct passwd *usr = getpwuid(info.st_uid);

    my_putchar(' ');
    my_putstr(usr->pw_name);
}

void print_group(struct stat info)
{
    struct group *gp = getgrgid(info.st_gid);

    my_putchar(' ');
    my_putstr(gp->gr_name);
}

void print_size(struct stat info)
{
    my_putchar(' ');
    my_put_nbr(info.st_size);
}

void print_total(DIR *dirp, struct dirent *dirent, char *current)
{
    struct stat info;
    char *path = NULL;
    int total = 0;

    dirp = opendir(current);
    while ((dirent = readdir(dirp))) {
        if (dirent->d_name[0] != '.') {
            path = my_concat_strings(current, dirent->d_name);
            stat(path, &info);
            total += info.st_blocks;
        }
    }
    my_putstr("total ");
    my_put_nbr(total / 2);
    my_putchar('\n');
    closedir(dirp);
}
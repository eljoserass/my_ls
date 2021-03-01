/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** print time
*/

#include "my_ls.h"

void print_permission_user(struct stat info)
{
    if (info.st_mode & S_IRUSR)
        my_putchar('r');
    else
        my_putchar('-');
    if (info.st_mode & S_IWUSR)
        my_putchar('w');
    else
        my_putchar('-');
    if (info.st_mode & S_IXUSR)
        my_putchar('x');
    else
        my_putchar('-');
}

void print_permission_group(struct stat info)
{
    if (info.st_mode & S_IRGRP)
        my_putchar('r');
    else
        my_putchar('-');
    if (info.st_mode & S_IWGRP)
        my_putchar('w');
    else
        my_putchar('-');
    if (info.st_mode & S_IXGRP)
        my_putchar('x');
    else
        my_putchar('-');
}

void print_permission_other(struct stat info)
{
    if (info.st_mode & S_IROTH)
        my_putchar('r');
    else
        my_putchar('-');
    if (info.st_mode & S_IWOTH)
        my_putchar('w');
    else
        my_putchar('-');
    if (info.st_mode & S_IXOTH)
        my_putchar('x');
    else
        my_putchar('-');
}

void print_time(struct stat info)
{
    int i = 0;
    int points = 0;
    char *time = ctime(&info.st_mtime);

    while (time[i] != ' ')
        i++;
    while (points != 2) {
        if (time[i] == ':')
            points++;
        if (points != 2)
            my_putchar(time[i]);
        i++;
    }
}
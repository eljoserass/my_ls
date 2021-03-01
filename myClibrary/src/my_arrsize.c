/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** arr size
*/

unsigned int my_arrsize(char **arr)
{
    int i = 0;

    while (arr[i]) {
        i++;
    }
    return (i);
}
/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** my_strcpy: function that copy a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
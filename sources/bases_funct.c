/*
** EPITECH PROJECT, 2021
** bases fonctions
** File description:
** putchar/str/nbr
*/
#include <stdarg.h>
#include "../bsq.h"

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

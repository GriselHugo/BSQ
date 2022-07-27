/*
** EPITECH PROJECT, 2022
** put nbr map
** File description:
** for bsq
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../bsq.h"

int count_len_ligne(char *my_map)
{
    int i = 0;
    while (my_map[i] != '\n') {
        i++;
    }
    return i + 1;
}

int compare_number(int nb1, int nb2, int nb3)
{
    int y;
    if (nb1 < nb2)
        y = nb1;
    else
        y = nb2;
    if (y > nb3)
        return nb3;
    else
        return y;
}

int compare_char(char *my_map, int i, int len_ligne)
{
    if (i - len_ligne - 1 >= 0) {
        int nb1 = my_map[i - len_ligne - 1] - 48;
        int nb2 = my_map[i - len_ligne] - 48;
        int nb3 = my_map[i - 1] - 48;
        int y = compare_number(nb1, nb2, nb3) + 1;
        my_map[i] = y + 48;
    }
}

int put_nbr_map(char *my_map)
{
    int len_ligne = count_len_ligne(my_map);
    int i = 0;
    for (i; my_map[i] != '\0'; i++) {
        if (my_map[i] != '\n' && my_map[i] != '0')
            compare_char(my_map, i, len_ligne);
        else if (my_map[i] == '\n')
            i++;
    }
}

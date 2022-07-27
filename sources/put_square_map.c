/*
** EPITECH PROJECT, 2022
** put square map
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

int put_square_map(char *my_map, maximum_t *maximum)
{
    int len_ligne = count_len_ligne(my_map);
    int first_x = maximum->pos - maximum->nbr * len_ligne - maximum->nbr;
    int y;
    for (int i = 0; i <= maximum->nbr; i++) {
        for (y = first_x; y <= first_x + maximum->nbr; y++) {
            my_map[y] = 'x';
        }
        y = y + len_ligne;
        first_x = first_x + len_ligne;
    }
}

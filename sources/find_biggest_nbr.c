/*
** EPITECH PROJECT, 2022
** find biggest nbr
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

int which_is_biggest(char char_map, int i, maximum_t *maximum)
{
    if (maximum->nbr < char_map - 48) {
        maximum->nbr = char_map - 48;
        maximum->pos = i;
    }
}

int find_biggest_nbr(char *my_map, maximum_t *maximum)
{
    maximum->nbr = 0;
    for (int i = 0; my_map[i] != '\0'; i++) {
        which_is_biggest(my_map[i], i, maximum);
    }
    maximum->nbr = maximum->nbr - 1;
}

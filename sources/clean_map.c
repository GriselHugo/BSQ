/*
** EPITECH PROJECT, 2022
** clean map
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

int clean_map(char *my_map)
{
    for (int i = 0; my_map[i] != '\0'; i++) {
        if (my_map[i] == '0') {
            my_map[i] = 'o';
        } else if (my_map[i] != '\n' && my_map[i] != 'x') {
            my_map[i] = '.';
        } else {
        }
    }
}

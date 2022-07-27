/*
** EPITECH PROJECT, 2022
** make map
** File description:
** for BSQ
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../bsq.h"

int map2(int i, int y, char *buffer, char *my_map)
{
    for (i, y; buffer[i] != '\0'; i++, y++) {
        if (buffer[i] == 'o') {
            my_map[y] = '0';
        } else if (buffer[i] == '\n' && buffer[i + 1] == '.') {
            my_map[y] = buffer[i];
            y++;
            i++;
            my_map[y] = '1';
        } else {
            my_map[y] = buffer[i];
        }
    }
}

int map1(char *buffer, char *my_map)
{
    int i = 0;
    int y = 0;
    for (i; buffer[i] != '\n'; i++);
    i++;
    for (i, y; buffer[i] != '\n'; i++, y++) {
        if (buffer[i] == '.') {
            my_map[y] = '1';
        } else if (buffer[i] == 'o') {
            my_map[y] = '0';
        } else {
            my_map[y] = buffer[i];
        }
    }
    map2(i, y, buffer, my_map);
}

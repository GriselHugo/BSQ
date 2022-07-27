/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** BTTF
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../bsq.h"

int fs_open_file(char const *filepath)
{
    if (open(filepath, O_RDONLY) == -1) {
        return 84;
    } else {
        return open(filepath, O_RDONLY);
    }
}

int make_map(char *buffer, int size, maximum_t *maximum)
{
    char *my_map = malloc(sizeof(char) * size + 1);
    map1(buffer, my_map);
    put_nbr_map(my_map);
    find_biggest_nbr(my_map, maximum);
    put_square_map(my_map, maximum);
    clean_map(my_map);
    my_putstr(my_map);
    free(my_map);
}

int bsq(char *filepath, maximum_t *maximum)
{
    int fd = fs_open_file(filepath);
    struct stat size;
        stat(filepath, &size);
        int sizeoctet = size.st_size;
    char *buffer = malloc(sizeof(char) * sizeoctet + 1);
    int sz = sizeoctet + 1;
    read(fd, buffer, sz);
    close(fd);
    make_map(buffer, sz, maximum);
    free(buffer);
}

char main(int argc, char **argv)
{
    maximum_t maximum;
    if (argc != 2) {
        return 84;
    } else {
        bsq(argv[1], &maximum);
        return 0;
    }
}

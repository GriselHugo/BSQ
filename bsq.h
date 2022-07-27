/*
** EPITECH PROJECT, 2022
** my h
** File description:
** for bsq
*/

#ifndef BSQ_H_
#define BSQ_H_

typedef struct maximum {
    int pos;
    int nbr;
} maximum_t;

int fs_open_file(char const *filepath);
int map2(int i, int y, char *buffer, char *my_map);
int map1(char *buffer, char *my_map);
int count_len_ligne(char *my_map);
int compare_number(int nb1, int nb2, int nb3);
int compare_char(char *my_map, int i, int len_ligne);
int put_nbr_map(char *my_map);
int which_is_biggest(char char_map, int i, maximum_t *maximum);
int find_biggest_nbr(char *my_map, maximum_t *maximum);
int put_square_map(char *my_map, maximum_t *maximum);
int clean_map(char *my_map);
int make_map(char *buffer, int size, maximum_t *maximum);
int bsq(char *filepath, maximum_t *maximum);

int my_strlen(char *str);
void my_putstr(char const *str);

#endif

/*
** EPITECH PROJECT, 2020
** dante generator
** File description:
** dante generator prototypes
*/

#ifndef _MY_GENERATOR_
#define _MY_GENERATOR_

char **mem_alloc_char_arr(int nb_rows, int nb_cols);
int my_getnbr(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_compute_power_rec(int nb, int p);
int cmp_str(char *str, char *str2);

#endif
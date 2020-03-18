/*
** EPITECH PROJECT, 2019
** BSQ
** File description:
** .h-desu
*/

#ifndef _MY_H_
#define _MY_H_

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int my_show_word_array(char * const *tab, int len);
char **my_str_to_word_array(char const *str);
char **filling_algorithm(char **tab, int *height);
int check_filling_algorithm(char **tab, int *height);
char **pledge_algorithm(char **tab, int *height, char **tmp, int *old_i_j);
int special_cases_2(int i, int j, char **tab, int *height);
char **copy(char **tab, int *height);
char **freee(char **tab, int *height, char **tmp);
char **rsl_filler(char **tab, char **rsl);
int myputstr(char *str, int opt);
int message(void);

#endif
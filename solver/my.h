/*
** EPITECH PROJECT, 2019
** BSQ
** File description:
** .h-desu
*/

#ifndef _MY_H_
#define _MY_H_

int my_show_word_array(char * const *tab, int len);
char **my_str_to_word_array(char const *str);
char **filling_algorithm(char **tab, int *height);
int check_filling_algorithm(char **tab, int *height);
char **pledge_algorithm(char **tab, int *height, char **tmp);
int special_cases_2(int i, int j, char **tab, int *height);
char **copy(char **tab, int *height);

#endif
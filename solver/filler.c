/*
** EPITECH PROJECT, 2020
** dante
** File description:
** filling-desu
*/

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"

int special_cases_2(int i, int j, char **tab, int *height)
{
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;
    int rsl = 0;

    if (((i - 1) >= 0) && (tab[(i - 1)][j] == 'X'))
        up = 1;
    if (((i + 1) <= height[1]) && (tab[(i + 1)][j] == 'X'))
        down = 1;
    if (((j - 1) >= 0) && (tab[i][(j - 1)] == 'X'))
        left = 1;
    if (((j + 1) <= height[0]) && (tab[i][(j + 1)] == 'X'))
        right = 1;
    rsl = up + down + left + right;
    return rsl;
}

int special_cases(int i, int j, char **tab, int *height)
{
    if (i == 0 && j == 0 && tab[(i + 1)][j] == 'X' && tab[i][(j + 1)] == 'X')
        return 1;
    if (i == 0 && j == height[0] && tab[(i + 1)][j] == 'X'
            && tab[i][(j - 1)] == 'X')
        return 1;
    if (i == height[1] && j == 0 && tab[(i - 1)][j] == 'X'
            && tab[i][(j + 1)] == 'X')
        return 1;
    if (i == height[1] && j == height[0] && tab[(i - 1)][j] == 'X'
            && tab[i][(j - 1)] == 'X')
        return 1;
    return 0;
}

char **filling_algorithm(char **tab, int *height)
{
    int i = 0;
    int j = 0;
    int rsl = 0;

    for (; tab[i] != NULL; i++)
        for (j = 0; tab[i][j] != '\0'; j++) {
            rsl = special_cases_2(i, j, tab, height);
            if (special_cases(i, j, tab, height))
                tab[i][j] = 'X';
            else if ((i == 0 || i == height[1] || j == 0 || j == height[0])
                        && rsl == 2)
                tab[i][j] = 'X';
            if (rsl >= 3)
                tab[i][j] = 'X';
        }
    return tab;
}

int check_filling_algorithm(char **tab, int *height)
{
    int i = 0;
    int j = 0;
    int rsl = 0;

    for (; tab[i] != NULL; i++)
        for (j = 0; tab[i][j] != '\0'; j++) {
            rsl = special_cases_2(i, j, tab, height);
            if ((special_cases(i, j, tab, height) == 1) && tab[i][j] != 'X')
                return 1;
            else if ((i == 0 || i == height[1] || j == 0 || j == height[0])
                        && rsl == 2 && tab[i][j] != 'X')
                return 1;
            if (rsl >= 3 && tab[i][j] != 'X')
                return 1;
        }
    return 0;
}
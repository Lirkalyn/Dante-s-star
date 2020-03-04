/*
** EPITECH PROJECT, 2020
** dante
** File description:
** pledge-desu
*/

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"

char **pledge_algorithm(char **tab, int *height)
{
    int i = 0;
    int j = 0;
    int rsl = 0;

    if (tab[0][0] != '*' || tab[height[1]][(height[0] - 1)] != '*')
        return NULL;
    while (tab[height[1]][(height[0] - 1)] != 'o') {
//        printf("1 :::::::: i = %d, j = %d\n", i, j);
        tab[i][j] = 'o';
        if ((j + 1) < height[0] && tab[i][(j + 1)] != 'X' && tab[i][(j + 1)] != 'o') {
            for (; tab[i][j] != 'X' && j < height[0] && tab[i][(j + 1)] != 'o'; j++)
            tab[i][j] = 'o';
            j--;
        }
        else if ((j - 1) >= 0 && tab[i][(j - 1)] != 'X' && tab[i][(j - 1)] != 'o') {
            for (; tab[i][j] != 'X' && j >= 0 && tab[i][(j - 1)] != 'o'; j--)
                tab[i][j] = 'o';
        j++;
        }
        else {
//        printf("2 :::::::: i = %d, j = %d\n", i, j);
        if ((i + 1) <= height[1] && tab[(i + 1)][j] != 'X' && tab[(i + 1)][j] != 'o')
            i++;
        else if ((i - 1) >= 0 && tab[(i - 1)][j] != 'X' && tab[(i - 1)][j] != 'o')
            i--;
//        tab[i][j] = 'o';
//        printf("%c\n", tab[i][j]);
//        printf("3 :::::::: i = %d, j = %d\n", i, j);
        }
//        tab[i][j] = 'o';
/*        rsl = special_cases_2(i, j, tab, height);
        if (((i == 0 || i == height[1] || j == 0 || j == height[0]) && rsl == 2) || (rsl >= 3)) {
            tab[i][j] = 'X';
            i = 0;
            j = 0;*/
//        }
    my_show_word_array(tab, height[0]);
    printf("\n\n");
    }
}
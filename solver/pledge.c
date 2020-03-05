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

char **go_right(char **tab, int *height, int *i, int *j)
{
    for (; tab[*i][*j] != 'X' && *j < height[0]
            && tab[*i][(*j + 1)] != 'o'; *j += 1)
        tab[*i][*j] = 'o';
    *j -= 1;
    return tab;
}

char **go_left(char **tab, int *height, int *i, int *j)
{
    for (; tab[*i][*j] != 'X' && *j >= 0 && tab[*i][(*j - 1)] != 'o'; *j -= 1)
        tab[*i][*j] = 'o';
    *j += 1;
    return tab;
}

int go_up_or_down(char **tab, int *height, int i, int j)
{
    if ((i + 1) <= height[1] && tab[(i + 1)][j] != 'X'
            && tab[(i + 1)][j] != 'o')
        return 1;
    else if ((i - 1) >= 0 && tab[(i - 1)][j] != 'X' && tab[(i - 1)][j] != 'o')
        return (-1);
    return 0;
}

char **pledge_algorithm(char **tab, int *height, char **tmp)
{
    int old_i_j[2] = {[0 ... 1] = 0};
    int i = 0;
    int j = 0;
    int rsl = 0;

    if (tab[0][0] != '*' || tab[height[1]][(height[0] - 1)] != '*')
        return NULL;
    while (tab[height[1]][(height[0] - 1)] != 'o') {
        tab[i][j] = 'o';
        if ((j + 1) < height[0] && tab[i][(j + 1)] != 'X'
                && tab[i][(j + 1)] != 'o')
            tab = go_right(tab, height, &i, &j);
        else if ((j - 1) >= 0 && tab[i][(j - 1)] != 'X'
                    && tab[i][(j - 1)] != 'o')
            tab = go_left(tab, height, &i, &j);
        else
            i += go_up_or_down(tab, height, i, j);
//        pledge_algorithm_2(tab, height, &i, &j);
/*        if ((j + 1) < height[0] && tab[i][(j + 1)] != 'X' && tab[i][(j + 1)] != 'o') {
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
            if ((i + 1) <= height[1] && tab[(i + 1)][j] != 'X' && tab[(i + 1)][j] != 'o')
                i++;
            else if ((i - 1) >= 0 && tab[(i - 1)][j] != 'X' && tab[(i - 1)][j] != 'o')
                i--;
        }*/
        if (i == old_i_j[0] && j == old_i_j[1]) {
            tmp[i][j] = 'X';
            return pledge_algorithm(tmp, height, tmp);
        }
        else {
            old_i_j[0] = i;
            old_i_j[1] = j;
        }
    my_show_word_array(tab, height[0]);
    printf("\n\n");
    }
}
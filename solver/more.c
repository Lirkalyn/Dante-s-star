/*
** EPITECH PROJECT, 2020
** dante
** File description:
** just the little add-on-desu
*/

//#include <stdlib.h>
#include "my.h"

char **freee(char **tab, int *height, char **tmp)
{
    for (int i = 0; i <= height[1]; i++)
        free(tab[i]);
    free(tab);
    tab = NULL;
    return tmp;
}

char **rsl_filler(char **tab, char **rsl)
{
    for (int i = 0; tab[i] != NULL; i++)
        for (int j = 0; tab[i][j] != '\0'; j++)
            if (tab[i][j] == 'o')
                rsl[i][j] = 'o';
    return rsl;
}

int message(void)
{
    myputstr("no solution found", 0);
    return 84;
}
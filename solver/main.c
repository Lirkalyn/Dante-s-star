/*
** EPITECH PROJECT, 2020
** Dante solver
** File description:
** solver main
*/

/*#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>*/
#include "my.h"

char *height_finders(char *buf, int height[])
{
    int i = 0;

    for (; buf[i] != '\n'; i++);
    height[0] = i;
    for (i = 0; buf[i] != '\0'; i++)
        if (buf[i] == '\n')
            height[1] += 1;
}

int algo_start(char **tab, int *height)
{
    char **tmp;
    char **rsl = copy(tab, height);
    int *old_i_j = (int *)malloc(2 * sizeof(int));

    while (check_filling_algorithm(tab, height) != 0
            || tab[height[1]][(height[0] - 1)] != 'o') {
        if (tab[0][0] == 'X' || tab[height[1]][(height[0] - 1)] == 'X')
            return message();
        tab = filling_algorithm(tab, height);
        tmp = copy(tab, height);
        tab = pledge_algorithm(tab, height, tmp, old_i_j);
    }
    tab[0][0] = (tab[0][0] != 'o') ? 'o' : tab[0][0];
    rsl = rsl_filler(tab, rsl);
    my_show_word_array(rsl, height[0]);
    free(old_i_j);
    freee(rsl, height, NULL);
    freee(tab, height, NULL);
    freee(tmp, height, NULL);
    return 0;
}

int main(int ac, char **av)
{
    struct stat fileStat;
    char *buf;
    int adre_readedbyte[2];
    int height[2] = {[0 ... 1] = 0};
    char **tab;

    if (ac != 2)
        return 84;
    if (stat(av[1], &fileStat) < 0)
        return 84;
    buf = (char *)malloc((fileStat.st_size + 1) * sizeof(char));
    adre_readedbyte[0] = open(av[1], O_RDONLY);
    if (adre_readedbyte[0] == -1)
        return 84;
    adre_readedbyte[1] = read(adre_readedbyte[0], buf, fileStat.st_size);
    buf[fileStat.st_size] = '\0';
    height_finders(buf, height);
    tab = my_str_to_word_array(buf);
    close(adre_readedbyte[0]);
    return algo_start(tab, height);
}
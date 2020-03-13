/*
** EPITECH PROJECT, 2020
** Dante generator
** File description:
** dante generator
*/

#include "my.h"
#include <stdlib.h>

void my_put_maze(char **maze, int n)
{
    for (int i = 0; i != n; i++) {
        my_putstr(maze[i]);
        my_putchar('\n');
    }
}

char **make_hole(char **map, int row, int col)
{
    int p;
    for (int i = 0; i != row; i++) {
        if (i % 2 != 0)
            map[i][rand() % col + 1] = '*';
    }
    map[row - 1][col - 1] = '*';
    return (map);
}

char **make_maze(char **map, int row, int col)
{
    char c = '*';
    for (int i = 0; i != row; i++) {
        if (i % 2 == 0)
            c = '*';
        else
            c = 'X';
        for (int j = 0; j != col; j++)
            map[i][j] = c;
    }
    map = make_hole(map, row, col);
    return (map);
}

char **make_perfect(char **map, int row, int col)
{
    map = make_maze(map, row, col);
    return (map);
}

int main(int ac, char **av)
{
    if (ac > 4 || ac < 3)
        return (84);
    int row = my_getnbr(av[1]);
    int col = my_getnbr(av[2]);
    char **map = mem_alloc_char_arr(row, col);
    if (ac == 3)
        map = make_maze(map, row, col);
    else if (ac == 4 && cmp_str(av[3], "[perfect]") == 1)
        map = make_perfect(map, row, col);
    else
        return (84);
    my_put_maze(map, row);
    free(map);
    return (0);
}

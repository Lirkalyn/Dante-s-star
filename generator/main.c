/*
** EPITECH PROJECT, 2020
** Dante generator
** File description:
** dante generator
*/

#include "my.h"

void my_put_maze(char **maze, int n)
{
    int lenght = 0;

    for (; maze[lenght] != 0; lenght++);
    for (int i = 0; i != n; i++) {
        my_putstr(maze[i]);
        if (i != (lenght - 1))
            my_putchar('\n');
    }
}

int main(int ac, char **av)
{
    if (ac > 3 || ac < 2)
        return (84);
    int row = my_getnbr(av[1]);
    int col = my_getnbr(av[2]);
    char **map = mem_alloc_char_arr(row, col);
    for (int i = 0; i != row; i++) {
        for (int j = 0; j != col; j++) {
            int u = rand();
            if (u % 2 == 0)
                map[i][j] = 'X';
            else
                map[i][j] = '*';
        }
    }
    my_put_maze(map, row);
    return (0);
}

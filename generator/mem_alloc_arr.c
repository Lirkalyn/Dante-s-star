/*
** EPITECH PROJECT, 2019
** mem_alloc_arr
** File description:
** allocation of 2d arrays
*/

#include <stdlib.h>

int **mem_alloc_int_arr(int nb_rows, int nb_cols)
{
    int **arr = malloc((nb_rows + 1) * sizeof(int));
    for (int j = 0; j != nb_rows; j++) {
        for (int i = 0; i != nb_cols; i++) {
            arr[j] = malloc((nb_cols + 1) * sizeof(int));
        }
    }
    return (arr);
}

char **mem_alloc_char_arr(int nb_rows, int nb_cols)
{
    char **arr = malloc((nb_rows + 1) * sizeof(char));
    for (int j = 0; j != nb_rows; j++) {
        for (int i = 0; i != nb_cols; i++) {
            arr[j] = malloc((nb_cols + 1) * sizeof(char));
        }
    }
    return (arr);
}

double **mem_alloc_double_arr(int nb_rows, int nb_cols)
{
    double **arr = malloc((nb_rows + 1) * sizeof(double));
    for (int j = 0; j != nb_rows; j++) {
        for (int i = 0; i != nb_cols; i++) {
            arr[j] = malloc((nb_cols + 1) * sizeof(double));
        }
    }
    return (arr);
}

/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** We disp characters
*/

#include <string.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
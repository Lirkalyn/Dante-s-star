/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** We count char in strings
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}

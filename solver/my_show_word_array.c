/*
** EPITECH PROJECT, 2019
** Day_08
** File description:
** my_show_word_array
*/

#include <unistd.h>

void my_putchar_2(char *c, int len)
{
    write(1, c, len);
}

int my_show_word_array(char * const *tab, int len)
{
    int i;
    int j;
    int lenght = 0;

    for (; tab[lenght] != NULL; lenght++);
    for (i = 0; tab[i] != 0; i++) {
        my_putchar_2(tab[i], len);
        if (i != (lenght - 1))
            my_putchar_2("\n", 1);
    }
    return 0;
}

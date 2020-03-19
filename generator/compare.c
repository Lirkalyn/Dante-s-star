/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** compare two string
*/

#include "my.h"

int cmp_str(char *str, char *str2)
{
    int len = my_strlen(str);
    int len2 = my_strlen(str2);

    if (len2 != len)
        return 0;
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str[i] != str2[i] && str[i] != '\0')
            return (0);
    }
    return (1);
}

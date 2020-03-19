/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** compare two string
*/

int cmp_str(char *str, char *str2)
{
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str[i] != str2[i] && str[i] != '\0')
            return (0);
    }
    return (1);
}

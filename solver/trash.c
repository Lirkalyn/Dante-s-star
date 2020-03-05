/*void pledge_algorithm_2(char **tab, int *height, int *i, int *j)
{
    if ((*j + 1) < height[0] && tab[*i][(*j + 1)] != 'X'
            && tab[*i][(*j + 1)] != 'o') {
        for (; tab[*i][*j] != 'X' && *j < height[0]
                && tab[*i][(*j + 1)] != 'o'; *j += 1);
            tab[*i][*j] = 'o';
        *j -= 1;
    }
    else if ((*j - 1) >= 0 && tab[*i][(*j - 1)] != 'X'
                && tab[*i][(*j - 1)] != 'o') {
        for (; tab[*i][*j] != 'X' && *j >= 0
                && tab[*i][(*j - 1)] != 'o'; *j -= 1)
            tab[*i][*j] = 'o';
    *j += 1;
    }
    else// {
        if ((*i + 1) <= height[1] && tab[(*i + 1)][*j] != 'X'
                && tab[(*i + 1)][*j] != 'o')
            *i += 1;
        else if ((*i - 1) >= 0 && tab[(*i - 1)][*j] != 'X'
                    && tab[(*i - 1)][*j] != 'o')
            *i -= 1;
//    }*/
}*/











/*char **copy(char **tab, int *height)
{
    char **tmp = (char **)malloc((height[1] + 2) * sizeof(char *));
    int i;

    if (tmp == NULL)
        return NULL;
    tmp[height[1] + 1] = NULL;
    for (int i = 0; i <= height[1]; i++) {
        tmp[i] = (char *)malloc((height[0] + 1) * sizeof(char));
        if (tmp[i] == NULL)
            return NULL;
        tmp[i][height[0]] = '\0';
        for (int j = 0; tab[i][j] != '\0'; j++)
            tmp[i][j] = tab[i][j];
    }
    return tmp;
}*/
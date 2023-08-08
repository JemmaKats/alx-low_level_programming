#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    char *new_str;
    int i, j, k = 0, len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
        for (j = 0; av[i][j]; j++)
            len++;

    new_str = malloc(sizeof(char) * (len + ac + 1));
    if (new_str == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++, k++)
            new_str[k] = av[i][j];
        new_str[k++] = '\n';
    }
    new_str[k] = '\0';

    return (new_str);
}

#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: string to count
 * Return: number of words in str
 */
int word_count(char *str)
{
    int i, wc = 0, in_word = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            wc++;
        }
    }

    return (wc);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of strings, or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, wc, len, in_word = 0;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    wc = word_count(str);
    if (wc == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (wc + 1));
    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; str[i]; i++)
    {
        if (str[i] == ' ')
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            for (len = 0; str[i + len] && str[i + len] != ' '; len++)
                ;
            words[j] = malloc(sizeof(char) * (len + 1));
            if (words[j] == NULL)
            {
                while (--j >= 0)
                    free(words[j]);
                free(words);
                return (NULL);
            }
            for (k = 0; k < len; k++)
                words[j][k] = str[i + k];
            words[j++][k] = '\0';
        }
    }
    words[j] = NULL;

    return (words);
}

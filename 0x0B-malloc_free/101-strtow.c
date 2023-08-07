#include <stdlib.h>
#include "main.h"

/**
 * count_word - Count the number of words in a string.
 * @s: String to evaluate.
 *
 * Return: Number of words.
 */
int count_word(char *s)
{
    int flag, c, w;

    flag = 0;
    w = 0;

    for (c = 0; s[c] != '\0'; c++)
    {
        if (s[c] == ' ')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            w++;
        }
    }

    return w;
}

/**
 * allocate_matrix - Allocate memory for the matrix of strings.
 * @words: Number of words.
 *
 * Return: Pointer to the allocated matrix, or NULL on failure.
 */
char **allocate_matrix(int words)
{
    return (char **)malloc(sizeof(char *) * (words + 1));
}

/**
 * fill_matrix - Fill the matrix with split words.
 * @matrix: Matrix to fill.
 * @str: String to split.
 *
 * Return: Nothing.
 */
void fill_matrix(char **matrix, char *str)
{
    int i, k = 0, len = 0, c = 0, start, end;

    while (*(str + len))
        len++;

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                end = i;
                char *tmp = (char *)malloc(sizeof(char) * (c + 1));

                if (tmp == NULL)
                    return;

                while (start < end)
                    *tmp++ = str[start++];

                *tmp = '\0';
                matrix[k] = tmp - c;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
            start = i;
    }

    matrix[k] = NULL;
}

/**
 * strtow - Splits a string into words.
 * @str: String to split.
 *
 * Return: Pointer to an array of strings (Success),
 *         or NULL (Error).
 */
char **strtow(char *str)
{
    int words;
    char **matrix;

    if (str == NULL)
        return NULL;

    words = count_word(str);

    if (words == 0)
        return NULL;

    matrix = allocate_matrix(words);

    if (matrix == NULL)
        return NULL;

    fill_matrix(matrix, str);

    return matrix;
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: character pointer
 * Return: length of the string
 */
int _strlen(char *s)
{
    int length;

    for (length = 0; s[length] != '\0'; length++)
    {

    }
    return (length);
}

/**
 * *_strdup - function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 * @str: pointer to string array input
 * Return: pointer to the newly copied string
 */

char *_strdup(char *str)
{
    char *ptr;
    int size;
    int i;

    if (str == NULL)
    {
        return (NULL);
    }
    size = _strlen(str) + 1;
    ptr = malloc(size * sizeof(char));

    i = 0;
    while (i < size)
    {
        if (ptr == NULL)
        {
            return (NULL);
        }
        ptr[i] = str[i];
        i++;
    }
    return (ptr);
}

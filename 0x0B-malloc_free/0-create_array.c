#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of size and initialize with char c.
 * @size: Size of the array.
 * @c: Char to assign to each element.
 *
 * Description: This function creates an array of the given size and initializes
 *              each element with the specified character.
 *
 * Return: Pointer to the array, NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;

    str = malloc(sizeof(char) * size);

    if (size == 0 || str == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        str[i] = c;

    return (str);
}

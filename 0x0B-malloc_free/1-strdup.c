#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string into a new memory space location.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if memory allocation fails or str is NULL.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	new_str = malloc(sizeof(char) * (length + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		new_str[i] = str[i];

	return (new_str);
}

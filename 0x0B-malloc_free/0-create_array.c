#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size `size` and assigns char `c`.
 * @size: Size of the array.
 * @c: Char to assign.
 *
 * Description: Creates an array of size `size` and assigns char `c`.
 * Return: Pointer to the array, NULL if fail.
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

#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of words, or NULL if fail.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, k = 0, len = 0, word_count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (str[j] && str[j] == ' ')
			j++;

		len = 0;
		while (str[j + len] && str[j + len] != ' ')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[j++];
		words[i][k] = '\0';
	}

	words[i] = NULL;
	return (words);
}

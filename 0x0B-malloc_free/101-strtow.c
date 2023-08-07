#include "main.h"
#include <stdio.h>

int main(void)
{
    char **words;
    int i;

    words = strtow(" ");
    if (words == NULL)
    {
        printf("Failed to split the string\n");
        return (1);
    }

    for (i = 0; words[i] != NULL; i++)
    {
        printf("%s\n", words[i]);
        free(words[i]);
    }
    free(words);

    return (0);
}

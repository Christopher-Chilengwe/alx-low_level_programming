#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Releases memory associated with a dog structure.
 * @d: A pointer to the dog structure to be freed.
 *
 * Return: No explicit return.
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->owner);
        free(d->name);
        free(d);
    }
}

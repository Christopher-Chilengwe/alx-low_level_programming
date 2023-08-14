#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Sets up a dog structure with provided details.
 * @d: A pointer to a dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: No explicit return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Displays the information of a dog.
 * @d: A pointer to a dog structure.
 *
 * Return: No explicit return.
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\n", (d->name) ? d->name : "(not provided)");
        printf("Age: %.2f\n", (d->age) ? d->age : 0.0);
        printf("Owner: %s\n", (d->owner) ? d->owner : "(not provided)");
    }
}

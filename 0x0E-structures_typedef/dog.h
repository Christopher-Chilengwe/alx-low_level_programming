#ifndef _DOG_HEADER_
#define _DOG_HEADER_

/**
 * struct dog - Attributes of a canine friend
 * @name: The name of the four-legged companion.
 * @age: The age of the furry buddy.
 * @owner: The loving caretaker of the adorable creature.
 *
 * Description: This structure holds the key attributes of a dog.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * dog_t - Typedef for the dog structure
 */
typedef struct dog dog_t;

void initialize_dog(struct dog *d, char *name, float age, char *owner);
void display_dog(struct dog *d);
dog_t *create_dog(char *name, float age, char *owner);
void release_dog(dog_t *d);

#endif

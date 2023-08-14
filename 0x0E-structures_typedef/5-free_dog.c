#include <stdlib.h>

/**
 * free_dog - frees a dog_t structure
 * @d: a pointer to the dog_t structure to free
 *
 * Description: Frees the memory allocated for a dog_t structure.
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}

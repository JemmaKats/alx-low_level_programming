#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the struct dog to print
 *
 * Description: Prints the members of a struct dog. If an element of d is NULL,
 * prints (nil) instead of this element. If d is NULL, prints nothing.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

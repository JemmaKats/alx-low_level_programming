/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to the variable to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: Initializes a variable of type struct dog with the given values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}

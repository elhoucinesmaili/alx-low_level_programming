#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name to initialize the dog with
 * @age: Age to initialize the dog with
 * @owner: Owner to initialize the dog with
 *
 * Description: This function initializes the members of a struct dog
 * with the given values.
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

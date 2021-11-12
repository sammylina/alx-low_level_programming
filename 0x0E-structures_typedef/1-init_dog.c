#include "dog.h"

/**
 * init_dog - inititalize a variable type struct dog
 * @d: pointer to variable struct dog
 * @name: pointer to name of dog
 * @age: age of do
 * @owner: pointer to ownerof dog
 *
 * Return: void
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

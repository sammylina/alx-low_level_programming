#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);
	if ((d->name) == NULL)
	{
		return (NULL);
	}
	d->owner = malloc(strlen(owner) + 1);
	if ((d->owner) == NULL)
	{
		return (NULL);
	}
	d->name = strcpy((d->name), name);
	d->owner = strcpy((d->owner), owner);
	d->age = age;
	return (d);
}

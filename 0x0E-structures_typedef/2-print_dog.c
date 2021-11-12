#include "dog.h"

/**
 * print_dog - printstruct dog type variable
 * @d: pointer to dog type varialbe
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
		printf("Name: %p\n", d->name);
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %p\n", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}
}

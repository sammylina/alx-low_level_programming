#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog type structure
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: a dog type struc with three members
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

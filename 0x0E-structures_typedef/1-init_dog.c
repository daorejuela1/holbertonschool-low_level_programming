#include "dog.h"
/**
 *init_dog - function that initialice the dog structure
 *@d: structure pointer
 *@name: name of the dog
 *@age: age of the pet
 *@owner: owner name
 *Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function which prints the dog structure
 *@d: structure pointer
 *Return: Void
 */
void print_dog(struct dog *d)
{	if (d != NULL)
	{
		if ((*d).name == NULL)
			(*d).name = "nil";
		if ((*d).owner == NULL)
			(*d).owner = "nil";
	printf("Name: %s\nAge: %f\nOwner: %s\n",
			(*d).name, (*d).age, (*d).owner);
	}
}

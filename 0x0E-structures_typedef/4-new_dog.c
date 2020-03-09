#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strndup(char *input);
/**
 *new_dog - creates the structure of a dog
 *@name: name of the pet
 *@age: age of the pet
 *@owner: name of the owner
 *Return: Void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _strndup(name);
	dog->age = age;
	dog->owner = _strndup(owner);
	return (dog);
}


/**
 *_strndup - copies strings from a memory address to another
 *@input: input string
 *Return: Nothing
 */
char *_strndup(char *input)
{
	int i = 0, n = 0;
	char *output;
	if (input != NULL)
		while (input[i])
			i++;
	else
		return (NULL);
	output = malloc(i + 1);
	if (output == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
		output[n] = input[n];
	output[i] = 0;
	return (output);
}

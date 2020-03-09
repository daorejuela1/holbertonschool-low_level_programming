#ifndef _STRUCT_HEADER_
#define _STRUCT_HEADER_
/**
 *struct dog - struct to define a pet
 *@name: name of the pet
 *@age: age of the pet
 *@owner: name of the owner
 *
 *Description: This struct can define a dog structure
 */
struct dog
{
	char *name;
	double age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

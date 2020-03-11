#include <stddef.h>
/**
 *array_iterator - iterates an array through different functions
 *@array: input array
 *@size: new array size
 *@action: action to perform to the array
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	if (size > 0 && action)
	{
		for (i = 0; i < (int)size; i++)
		{
			(*action)(array[i]);
		}
	}
}

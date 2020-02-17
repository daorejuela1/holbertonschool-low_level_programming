#include <stdlib.h>
/**
 *swap_int - swap the data between two integers.
 *@a: first data
 *@b: second data
 *
 *Return - none
 */
void swap_int(int *a, int *b)
{
	int *backup = malloc(4);
	*backup = *a;
	*a = *b;
	*b = *backup;
}

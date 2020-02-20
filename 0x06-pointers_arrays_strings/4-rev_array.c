#include "holberton.h"
#include <stdio.h>
/**
  *reverse_array - reverse int array
  *
  *@a: first string
  *@n: limit number
  *Return: Nothing
  */
void reverse_array(int *a, int n)
{
	int i, temp, div;

	n--;
	if (n % 2  == 0)
		div = n / 2;
	else
		div = (n - 1) / 2;
	for (i = 0; i <= div; i++)
	{
		temp = *(a + n - i);
		*(a + n - i) = *(a + i);
		*(a + i) = temp;
	}
}

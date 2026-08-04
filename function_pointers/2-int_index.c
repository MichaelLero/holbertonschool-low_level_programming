#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function searches for an integer
 * @array: array of integers
 * @size: number of elements in an array
 * @cmp: pointer to function that compares values
 *
 * return: index of the first element for which cmp
 * function does not return 0, if no element matchs return -1
 * or if size <= 0 return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	counter = 0;

	if (array == NULL)
	{
		return (-1);
	}

	if (cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	while (counter < size)
	{
		if (cmp(array[counter]) != 0 )
		{
			return (counter);
		}

		counter++;
	}

	return (-1);
}

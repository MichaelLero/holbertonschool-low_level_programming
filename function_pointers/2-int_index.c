#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer in an array
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first element where cmp does not return 0,
 * or -1 if no match is found.
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
		if (cmp(array[counter]) != 0)
		{
			return (counter);
		}

		counter++;
	}

	return (-1);
}

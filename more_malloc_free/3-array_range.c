#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: Pointer to newly create array or NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *array
	int size;
	int i;

	size = 0;
	i = 0;


	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(size * sizeof(size));

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = min + 1;
		i++;
	}

	return (array);
}

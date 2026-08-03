#include "function_pointers.h"

/**
 * array_interator -  executes a function given as a parameter on each
 * element of an array
 * @array: array of integers
 * @size: size of the array of integers
 * @action: pointer function that is used for each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter;

	counter = 0;

	if (array == NULL)
	{
		return;
	}

	while (counter < size)
	{
		action(array[counter]);
		counter++;
	}
}

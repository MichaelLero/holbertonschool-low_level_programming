#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memeory for an array, using malloc
 * @nmemb: array of elements
 * @size: bytes of each element
 *
 * Return: Returns NULL if nmemb or size is 0 or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *memory;
	unsigned int i;
	unsigned int total_size;

	i = 0;
	total_size = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memory = ptr;

	while (i < total_size)
	{
		memory[i] = 0;
		i++;
	}

	return (ptr);
}

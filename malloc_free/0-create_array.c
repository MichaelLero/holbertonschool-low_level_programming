#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialises it
 * with a specific character
 * @size: size of array
 * @c: Characters to be inside the array
 *
 * Return: pointer to an array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int counter;

	counter = 0;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	while (size > counter)
	{
		str[counter] = c;
		counter++;
	}
	return (str);

}

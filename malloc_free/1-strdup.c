#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: String to duplicate
 *
 * Return: Null if str = NULL or pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int length;
	unsigned int i;

	length = 0;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	while (i < length)
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0';

	return (copy);
}

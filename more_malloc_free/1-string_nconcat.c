#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - links two strings
 * @s1: First string
 * @s2: Second string
 * @n: length of string to pass
 *
 * Return: Stings combined result or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strings;
	unsigned int length1;
	unsigned int length2;
	unsigned int i1;
	unsigned int i2;
	unsigned int copy_length;

	length1 = 0;
	length2 = 0;
	i1 = 0;
	i2 = 0;
	copy_length = 0;


	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}

	if (n >= length2)
	{
		copy_length = length2;
	}
	else
	{
		copy_length = n;
	}

	strings = malloc((length1 + copy_length + 1) * sizeof(char));


	if (strings == NULL)
	{
		return (NULL);
	}

	while (i1 < length1)
	{
		strings[i1] = s1[i1];
		i1++;
	}

	while (i2 < copy_length)
	{
		strings[i1] = s2[i2];
		i1++;
		i2++;
	}

	strings[i1] = '\0';

	return (strings);
}

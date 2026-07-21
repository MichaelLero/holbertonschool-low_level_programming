#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters to match
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int i;

	count = 0;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			i++;
		}

		if (accept[i] == '\0')
		{
			break;
		}

		s++;
	}

	return (count);
}

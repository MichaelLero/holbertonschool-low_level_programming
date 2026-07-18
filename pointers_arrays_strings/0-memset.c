#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string of characters
 * @b: character wanting to use to replace others
 * @n: how many characters to replace
 *
 * Return: Character word
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

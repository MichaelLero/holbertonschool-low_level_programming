#include "main.h"
/**
 * _strncat - adds part of one string (src) to the
 * end of another string (dest)
 * @dest: destination string
 * @src: source string
 * @n: number of characters in src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter;
	int counter2;

	counter = 0;
	counter2 = 0;

	while (dest[counter2] != '\0')
	{
		counter2++;
	}

	while (src[counter] != '\0' && counter < n)
	{
		dest[counter2] = src[counter];
		counter++;
		counter2++;
	}

	dest[counter2] = '\0';

	return (dest);
}

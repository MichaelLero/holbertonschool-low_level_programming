#include "main.h"
/**
 * _strncpy - copies up to n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters in src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	counter = 0;

	while (counter < n)
	{
		if (src[counter] != '\0')
		{
			dest[counter] = src[counter];
		}
		else
		{
			dest[counter] = '\0';
		}
		counter++;
	}

	return (dest);
}

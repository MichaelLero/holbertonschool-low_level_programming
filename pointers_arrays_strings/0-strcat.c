#include "main.h"
/**
 * _strcat - Appends the src string to dest string, overwriting the terminating
 * null byte (\0) at the end of dest, and then re-adds it
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int counter;
	int counter2;

	counter = 0;
	counter2 = 0;

	while (dest[counter2] != '\0')
	{
		counter2++;
	}

	while (src[counter] != '\0')
	{
		dest[counter2] = src[counter];
		counter++;
		counter2++;
	}

	dest[counter2] = '\0';

	return (dest);
}

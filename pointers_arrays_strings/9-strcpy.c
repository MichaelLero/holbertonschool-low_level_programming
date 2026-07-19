#include "main.h"
/**
 * _strcpy - copies a string from src into dest,
 *including the ending \0 character
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;

	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}

	dest[counter] = '\0';

	return (dest);
}

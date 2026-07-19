#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: where data is copies to
 * @src: where data will be copies from
 * @n: number of bytes copied
 *
 * Return: Copied characters to existing string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int counter;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	return (s1[counter] - s2[counter]);
}

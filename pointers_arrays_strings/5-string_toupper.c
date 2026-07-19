#include "main.h"
/**
 * string_toupper - changes lowercase letters of a string to upper
 * @str: string of char
 *
 * Return: Characters in uppercase
 */
char *string_toupper(char *str)
{
	int counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] = str[counter] - 32;
		}

		counter++;
	}
	return (str);
}

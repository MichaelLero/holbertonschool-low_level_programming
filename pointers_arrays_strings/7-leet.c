#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: The encoded the string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
			j++
		}
		i++
	}

	return (str);
}

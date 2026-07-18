#include "main.h"

/**
 * cap_string - Capitalise all words of a string
 * @str: String to capitalise
 *
 * Return: Upper case words
 */
char *cap_string(char *str)
{
	int i;
	int capital;

	i = 0;
	capital = 1;

	while (str[i] != '\0')
	{
		if (capital == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
			capital = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' ||
			str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capital = 1;
		}
		else
		{
			capital = 0;
		}

		i++;
	}

	return (str);
}

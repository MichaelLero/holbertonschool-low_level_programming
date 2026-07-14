#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int counter;
	int start;
	char temp;

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	counter--;
	start = 0;

	while (start < counter)
	{
		temp = s[start];
		s[start] = s[counter];
		s[counter] =  temp;

		start++;
		counter--;
	}
}

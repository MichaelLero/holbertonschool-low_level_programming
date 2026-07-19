#include "main.h"

/**
 * _isalpha - checks if upper or lowercase alphabetic character
 *
 *@c: Checks character
 *
 * Return: 1 if alphabetic character, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

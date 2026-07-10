#include "main.h"
/**
 * _isupper - checks for numbers between 0-9
 * @c: character check
 *
 * Return: 1 if upper case, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}

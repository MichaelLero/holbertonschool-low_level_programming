#include "main.h"
/**
 * _isupper - checks for upper case charcaters
 * @c: character check
 *
 * Return: 1 if upper case, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}

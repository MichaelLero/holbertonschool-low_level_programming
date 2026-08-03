#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer
 * @name: name wanting to be printed
 * @f: function used to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}

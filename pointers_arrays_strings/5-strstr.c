#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;

		while (*start == *search && *search != '\0')
		{
			start++;
			search++;
		}

		if (*search == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

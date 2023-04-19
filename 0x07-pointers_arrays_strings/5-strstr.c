#include "main.h"

/**
 *_strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 * of the located substring.
 * If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *b = needle;

		while (*i == *b && *b != '\0')
		{
			i++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}

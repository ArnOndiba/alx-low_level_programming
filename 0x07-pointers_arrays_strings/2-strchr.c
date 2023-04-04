#include "main.h"
#include <string.h>

/**
 * *_strchr -locates character in string
 * @s: variable input
 * @c: variable input
 *
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
		return (&s[i]);
	}
	i++;
	}
	return (NULL);
}


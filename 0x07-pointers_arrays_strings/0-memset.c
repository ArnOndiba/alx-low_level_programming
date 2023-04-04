#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: variable input
 * @b: variable input
 * @n: variabe input
 *
 * Return: a pointer to the mem area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
	*p++ = b;
	}
	return (s);
}

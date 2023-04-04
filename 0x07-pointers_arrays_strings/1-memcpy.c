#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: variable input
 * @src: variable input
 * @n: variable input
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r_dest = dest;
	char *r_src = src;

	while (n--)
	{
	*r_dest++ = *r_src++;
	}
	return (dest);
}

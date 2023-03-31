#include "main.h"

/**
 * *_strncat - concatenates two string
 * @dest: variable input
 * @src: variable input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ;i < n && src[i] != '\0' ; i++)
	*dest = *src;
	dest = '\0';

	return dest;
}

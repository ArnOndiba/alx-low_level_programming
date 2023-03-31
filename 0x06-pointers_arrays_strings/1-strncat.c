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
	int dest_len = 0, i = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0 ; i < n && src[i] ; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}

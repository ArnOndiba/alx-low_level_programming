#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: variable input
 * @src: variable input
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[i++])
		dest_len++;


	for (i = 0 ; src[i] ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}

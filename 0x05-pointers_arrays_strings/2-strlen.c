#include "main.h"
#include <string.h>

/**
 * _strlen - prints string length
 * @s: variable input
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenantes two string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		_putchar(*src);
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

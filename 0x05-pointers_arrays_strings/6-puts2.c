#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string reference
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}


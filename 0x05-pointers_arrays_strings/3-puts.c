#include "main.h"

/**
 *_puts - prints formatted string
 * @str: variable input
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

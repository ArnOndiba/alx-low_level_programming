#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers trough 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	char n = 0;

	for ( ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}

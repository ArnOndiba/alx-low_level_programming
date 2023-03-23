#include "main.h"

/**
* more_numbers - prints 0to14,10times
*
* Return: void
*/

void more_numbers(void)
{
	char n, c;

	int j = 0;

	while (j < 10)
	{

		for (n = 0; n < 15 ; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}

		_putchar('\n');
		j++;

	}

}

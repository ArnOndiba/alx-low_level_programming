#include "main.h"

/**
 * reset_to_98 - set the integer to 98
 * @m: variable input
 *
 * Return: nothing.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - changing the value of a variable from outside the function it is declared in,using pointer.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	_putchar('n=%d\n', n);
	void reset_to_98(int *n);
	_putchar('n=%d\n', n);
	return (0);
}

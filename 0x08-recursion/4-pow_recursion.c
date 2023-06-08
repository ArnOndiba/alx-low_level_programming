#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - power of 2 nos.
 * @x: variable input
 * @y: variable input
 *
 * Return: power of 2 nos.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

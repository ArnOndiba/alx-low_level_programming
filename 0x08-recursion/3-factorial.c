#include <stdio.h>
#include "main.h"
/**
 * factorial - returns factorial of a no
 * @n: variable input
 *
 * Return: factoriol
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

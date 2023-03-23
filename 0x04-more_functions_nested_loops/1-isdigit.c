#include "main.h"

/**
 * _isdigit- checks for a digit through integers
 *
 * @c: variable input
 *
 * Return: 1 if true return 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

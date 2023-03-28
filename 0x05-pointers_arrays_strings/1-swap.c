#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: variable input
 * @b: variable input
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

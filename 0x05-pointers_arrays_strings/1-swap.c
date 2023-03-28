#include "main.h"

/**
 * swap_int - swaps two integer values
 * @t: variable input
 * @a: variable input
 * @b: variable input
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

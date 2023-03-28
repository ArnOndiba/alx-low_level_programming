#includ "main.h"

/**
 * swap_int - swaps two integer values
 * @t: variable input
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

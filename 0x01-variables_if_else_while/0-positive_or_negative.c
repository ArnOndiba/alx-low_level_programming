#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check if n is < > or = to 0
 * description: find if a random number
 * is +,- or 0
 * return: negative positive or zero
 */

int main(void)
{
	int n;

	srand(time(0));
	/* description */
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);

	return (0);
}

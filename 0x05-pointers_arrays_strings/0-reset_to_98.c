#include "main.h"

/**
 * _reset_to_98 - updates the value
 * points to to 98
 * @n: parameter
 */
void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	*n = 98;
	printf("n=%d\n", *n);
	return (0);
}

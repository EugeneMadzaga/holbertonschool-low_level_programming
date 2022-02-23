#include "main.h"
/**
 * _sqrt_recursion - Return the natural squre root of a number
 * @n: Number to be used
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n  == 1)
		return (1);

	return (find_sqrt(n, root));
}

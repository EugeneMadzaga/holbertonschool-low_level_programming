#include "main.h"
/**
 * factorial - Return factorial of given number
 * @n: Given number
 * Return: If n > 0 (the factorial of n)
 *         If n < 0 (return 1 as an error)
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}

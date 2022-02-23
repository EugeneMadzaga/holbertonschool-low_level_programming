#include "main.h"
/*
 * _pow_recursion - Return the value of x raiseed to the power of y
 * @x: Number to be used
 * @y: Power value
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y -1);

	return (result);
}

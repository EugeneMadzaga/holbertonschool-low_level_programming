#include "main.h"
/**
 * _puts_recursion - Print a string then print new line
 * @s: The string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

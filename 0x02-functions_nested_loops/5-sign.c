#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 * @n: Argument to be checked
 * Return:  1 and prints + if n is > 0
 * 0 and prints 0 if n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	} else if (n < 0)
	{
		return (-1);
		_putchar(45);
	} else
	{
		return (0);
		_putchar(48);
	}

}

#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 *
 * @n: number
 *
 * Return: 1 and prints + if n is greater than zero,
 *	0 and prints 0 if n is zero,
 *	-1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int sign_state;

	if (n > 0)
	{
		sign_state = 1;
		_putchar(43);
	} else if (n < 0)
	{
		sign_state = -1;
		_putchar(45);
	} else
	{
		sign_state = 0;
		_putchar(48);
	}

	return (sign_state);
}

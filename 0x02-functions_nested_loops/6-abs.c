#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @n: integer value.
 *
 * Return: the absolute value of the integer value.
 *
 */

int _abs(int n)
{
	int n_abs;

	if (n < 0)
	{
		n_abs = n * -1;
	} else
	{
		n_abs = n;
	}
	return (n_abs);
}

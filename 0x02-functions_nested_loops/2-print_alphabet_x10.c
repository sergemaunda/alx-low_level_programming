#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
	int i, k;

	for (k = 0; k < 10; ++k)
	{
		for (i = 97; i < 123; ++i)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}

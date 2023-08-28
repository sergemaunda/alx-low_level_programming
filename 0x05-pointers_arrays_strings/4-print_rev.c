#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 *
 * @str: string input.
 *
 * Return: Nothing
 */

void print_rev(char *str)
{
	int i;
	int str_cnt = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		++str_cnt;
	}

	while (str_cnt--)
	{
		_putchar(str[str_cnt]);
	}

	_putchar(10);
}
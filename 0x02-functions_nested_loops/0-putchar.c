#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	char str[8] = "_putchar";

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}

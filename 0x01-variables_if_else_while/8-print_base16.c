#include <stdio.h>


/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; ++i)
	{
		putchar(i);
	}

	for (i = 97; i < 103; ++i)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}

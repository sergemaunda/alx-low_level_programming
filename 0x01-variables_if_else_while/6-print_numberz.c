#include <stdio.h>


/**
 * main - program that prints the alphabet in lowercase
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

	putchar(10);

	return (0);
}

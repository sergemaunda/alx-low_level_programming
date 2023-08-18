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

	for (i = 122; i > 96; --i)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}

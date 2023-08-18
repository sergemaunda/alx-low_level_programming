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
	int inc;
	int d_count;

	d_count = 0;
	inc = 0;

	while (d_count <= 9)
	{
		for (i = 49 + d_count; i < 58; ++i)
		{
			++inc;
			putchar(48 + d_count);
			putchar(i);

			if (inc < 45)
			{
				putchar(44);
				putchar(32);
			}
		}

		++d_count;
	}

	putchar(10);

	return (0);
}

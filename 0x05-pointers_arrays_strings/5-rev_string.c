#include "main.h"

/**
 * rev_string -  function that reverses a string.
 *
 * @s: string input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int str_len = 0;
	char rev_str[500];

	for (i = 0; s[i] != '\0'; ++i)
	{
		++str_len;
	}

	while (str_len--)
	{
		rev_str[j] = s[str_len];
		++j;
	}

	for (i = 0; rev_str[i] != '\0'; ++i)
	{
		s[i] = rev_str[i];
	}
}
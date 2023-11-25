#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: amount of memory to allocate for second string.
 *
 * Return: pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len_s1 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 != NULL)
	{
		for (; s1[len_s1] != '\0'; ++len_s1)
		{
		}
	}

	p = malloc(len_s1 + n);

	if (p == NULL)
		return (NULL);
		
	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; ++i)
			p[i] = s1[i];
	}

	if (s2 != NULL)
	{
		for (; j < n; ++j)
			p[i + j] = s2[j];
	}

	p[i + j] = '\0';

	return (p);
}

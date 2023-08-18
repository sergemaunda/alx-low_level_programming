#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: Character.
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise.
 *
 */

int _isalpha(int c)
{
	int isAlpha;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		isAlpha = 1;
	} else
	{
		isAlpha = 0;
	}

	return (isAlpha);
}

/**
 * _isupper - a function that checks for uppercase character.
 * @c: integer c, ASCII value to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	int isUpper;

	if ((c >= 65) && (c <= 90))
	{
		isUpper = 1;
	}
	else
	{
		isUpper = 0;
	}

	return (isUpper);
}
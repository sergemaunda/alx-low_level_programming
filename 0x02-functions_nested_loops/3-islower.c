/**
 * _islower - a function that checks for lowercase character.
 * @c: character.
 *
 * Return: Return 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

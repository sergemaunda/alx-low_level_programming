/**
 * _strlen - function that returns the length of a string
 *
 * @s: String input
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int sCnt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		++sCnt;
	}

	return (sCnt);
}
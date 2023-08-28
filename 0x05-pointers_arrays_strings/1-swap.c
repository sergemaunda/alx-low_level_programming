/**
 * swap_int - function that swaps th values of two integers
 *
 * @a: first number
 * @b: second number
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
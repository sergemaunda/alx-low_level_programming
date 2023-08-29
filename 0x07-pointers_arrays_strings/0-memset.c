/**
 * _memset - function fills the first n bytes of the memory area
 *  pointed to by s with the constant byte b
 *
 *  @s: Pointer to memory area.
 *  @b: Constant byte.
 *  @n: Number of bytes to to fill.
 *  Return: Pointer to the memory area.
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
    while (n > 0) {
        s[n - 1] = b;
        n--;
    }
    return s;
}

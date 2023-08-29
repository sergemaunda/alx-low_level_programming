/**
* _memcpy - function that copies n bytes from memory
* area src to memory area dest
* @dest: memory area destination
* @src: memory area source
* @n: number of bytes
* Return: a pointer to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}

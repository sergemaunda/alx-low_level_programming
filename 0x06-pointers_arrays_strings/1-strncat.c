/**
 * _strncat - a function that concatenates two strings.
 * @dest: string destination
 * @src: string source
 * @n: bytes from src
 * Return: a pointer to the resulting string dest
 */
 
char *_strncat(char *dest, char *src, int n)
{
    int i, s;
    
    s = 0;
    while (dest[s] != '\0')
        s++;
    
    i = s;
    while (n > 0 && src[i - s] != '\0') {
        dest[i] = src[i - s];
        i++;
        n--;
    }
    dest[i] = '\0';
    return dest;
}

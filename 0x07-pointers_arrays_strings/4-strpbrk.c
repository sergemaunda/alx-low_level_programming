/**
* _strpbrk - a function that searches a string for any of a set of bytes
* @s: the string
* @accept: the characters
* Return: a pointer to the byte in s that matches one of the bytes
* in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
    int l = 0, i;
    
    while (s[l]) {
        for (i = 0; accept[i]; i++) {
            if (s[l] == accept[i])
                return (&s[l]);
        }
        l++;
    }
    return (0);
}
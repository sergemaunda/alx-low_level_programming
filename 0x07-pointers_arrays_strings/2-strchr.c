/**
* _strchr - function that locates a character in a string.
* @s: the string 
* @c: the character
* Return: a pointer to the first occurrence of the character c 
* in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
unsigned int i = 0;

    while (1) {
        if (s[i] == c)
            return (&s[i]);
        else if (s[i] == '\0')
            return (0);
        i++;
    }
}
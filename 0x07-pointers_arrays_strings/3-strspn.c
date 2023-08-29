/**
* _strspn - a function that gets the length of a prefix substring.
* @s: the string
* @accept: the characters
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
    int l = 0, i;
    
    while (s[l]) {
        for (i = 0; accept[i]; i++) {
            if (s[l] == accept[i])
                break;
        }
    
        if (!accept[i])
            break;
    
        l++;
    }
    
    return l;
}
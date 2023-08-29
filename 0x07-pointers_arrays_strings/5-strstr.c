/**
* _strstr - a function that locates a substring.
* @haystack: the string
* @needle: the substring
* Return:  a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
    int i, l, c, size;
    
    size = 0;
    while (needle[size])
        size++;
    
    l = 0;
    while (haystack[l]) {
        c = 0;
    
        i = 0;
        while (needle[i]) {
            if (haystack[l + i] == needle[i] && haystack[l + i] != '\0')
                c++;
            else {
                c = 0;
                break;
            }
            i++;
        }
    
        if (c == size)
            return (&haystack[l]);
    
        l++;
    }
    return (0);
}
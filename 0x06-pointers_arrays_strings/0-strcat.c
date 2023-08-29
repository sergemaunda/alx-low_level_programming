/**
 *  _strcat -  function that concatenates two strings.
 *
 *  @dest: string receiving concatenation
 *  @src: string to concatenate
 *
 *  Return: a pointer to the resulting string dest
 */

char * _strcat(char * dest, char * src) {
    char tempStr[98] = "";
    int i = 0;
    int j = 0;
    int k = 0;

    while (dest[i] != '\0') {
        tempStr[i] = dest[i];
        ++i;
    }

    do {
        tempStr[i] = src[j];
        ++i;
        ++j;
    } while (src[j] != '\0');

    do {
        dest[k] = tempStr[k];
        ++k;
    } while (tempStr[k] != '\0');

    return (dest);
}
#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;

a = 0;

while (dest[a] != 0)
{
a++;
}

b = 0;

while (src[b] != 0)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}

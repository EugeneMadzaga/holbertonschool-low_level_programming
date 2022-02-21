#include "main.h"
/**
 * _memcpy - Copy memory area
 * @dest: destination to copy to
 * @src: Source to copy from
 * @n: Amount of times
 * Return: The string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i]
}
return (dest);
}

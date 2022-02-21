#include "main.h"
/**
 *_memset - Fill memory with contant byte
 *@s: A pointer to the memory area to be filled
 *@c: Character to fill the memory are with
 *@n: Number of bytes to be filled
 *Return: Pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

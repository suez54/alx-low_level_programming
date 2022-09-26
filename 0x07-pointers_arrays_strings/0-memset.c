#include <stdio.h>

/**
 * *_memset - fn to set mem
 * @s: array of characters
 * @b: character
 * @n: unassignd int
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; n > 0; j++, n--)
{
s[j] = b;
}
return (s);
}

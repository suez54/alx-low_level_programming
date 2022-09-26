#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
int count;

while (*s)
{
for (count = 0; accept[count]; count++)
{
if (*s == accept[count])
{
return (s);
}
}
s++;
}
return ('\0');
}

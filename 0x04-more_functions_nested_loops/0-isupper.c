#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: variable c
 * Return: 1 if c is uppercase.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
putchar('\n');
}

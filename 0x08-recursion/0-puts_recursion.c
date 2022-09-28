#include <stdio.h>

/**
 * _puts_recursion - fn to print string
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
putchar('\n');
return;
}
putchar(*s);
putchar('\n');
}

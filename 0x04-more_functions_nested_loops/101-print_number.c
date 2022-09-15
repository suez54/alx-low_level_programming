#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
unsigned int a = n;
 
if (n < 0)
{
putchar('-');
a = -a;
}
if ((a / 10) > 0)
print_number(a / 10);
putchar((a % 10) + '0');
}

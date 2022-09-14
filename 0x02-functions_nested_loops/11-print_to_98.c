#include<stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
putchar(n + '0');
if (n != 98)
{
putchar(',');
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
putchar(n + '0');
if (n != 98)
{
putchar(',');
}
n--;
}
}
else
{
putchar(57+56);
}
putchar('\n');
}
